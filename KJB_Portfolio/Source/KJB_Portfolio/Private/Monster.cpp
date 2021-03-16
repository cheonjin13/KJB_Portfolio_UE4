// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"
#include "MonsterAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "MonsterDataComponent.h"
#include "Components/WidgetComponent.h"
#include "CharacterWidget.h"
#include "MyAIController.h"
#include "MyPlayerController.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "DamageWidgetActor.h"
#include "ItemActor.h"
#include "Item.h"
#include "MyCharacter.h"

// Sets default values
AMonster::AMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add("Monster");

	AIControllerClass = AMyAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;

	GetCapsuleComponent()->SetCapsuleHalfHeight(120.0f);
	GetCapsuleComponent()->SetCapsuleRadius(120.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("MyEnemy"));

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -120.0f), FRotator(0.0f, -90.0f, 0.0f));
	
	MonsterStat = CreateDefaultSubobject<UMonsterDataComponent>(TEXT("MONSTERSTAT"));
	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));
	HPBarWidget->SetupAttachment(GetMesh());
	HPBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	HPBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	//WidgetBlueprint'/Game/MyContents/UI/UI_HPBar.UI_HPBar'
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HPBAR(TEXT("/Game/MyContents/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HPBAR.Succeeded())
	{
		HPBarWidget->SetWidgetClass(UI_HPBAR.Class);
		HPBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}		

	static ConstructorHelpers::FObjectFinder<UBlueprint> UI_DAMAGE(TEXT("Blueprint'/Game/MyContents/UI/DamageWidgetActor_BP.DamageWidgetActor_BP'"));
	if (UI_DAMAGE.Succeeded())
	{
		DamageWidgetActorClass = (UClass*)UI_DAMAGE.Object->GeneratedClass;
	}
	AttackRange = 200.0f;
	AttackRadius = 100.0f;
	DeadTimer = 5.0f;

	IsAttacking = false;
	IsDamaged = false;

	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SPAWNITEM(TEXT("Blueprint'/Game/MyContents/Items/ItemActor/BP_ItemActor.BP_ItemActor'"));
	if (BP_SPAWNITEM.Succeeded())
	{
		ItemActorBPClass = (UClass*)BP_SPAWNITEM.Object->GeneratedClass;
	}

	ItemRandom = 0;

}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	auto CharacterWidget = Cast<UCharacterWidget>(HPBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->BindMonsterStat(MonsterStat);
	}

}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void AMonster::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	MyAnim = Cast<UMonsterAnimInstance>(GetMesh()->GetAnimInstance());
	if (MyAnim != nullptr)
	{
		MyAnim->OnMontageEnded.AddDynamic(this, &AMonster::OnAttackMontageEnded);
		MyAnim->OnAttackHitCheck.AddUObject(this, &AMonster::AttackCheck);
		MyAnim->OnAnimEndCheck.AddLambda([this]()->void 
		{
			IsDamaged = false;
		});
	}

	SetCharacterState(ECharacterState::READY);	
	
}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AMonster::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	MonsterStat->SetDamage(FinalDamage);
	
	UWorld* world = GetWorld();
	if (world)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		FVector SpawnLocation = GetActorLocation();
		SpawnLocation.X += FMath::RandRange(-100.0f, 100.0f);
		ADamageWidgetActor* DamageWidgetSpawner = world->SpawnActor<ADamageWidgetActor>(DamageWidgetActorClass, SpawnLocation, GetActorRotation(), SpawnParams);
		if (DamageWidgetSpawner)
		{
			DamageWidgetSpawner->SetDamageText(FText::FromString(FString::FromInt(FinalDamage)));
		}
	}

	auto myAIcon = Cast<AMyAIController>(GetController());
	if (myAIcon)
	{
		auto target = Cast<AMyCharacter>(DamageCauser);
		if (target)
		{
			myAIcon->SetTarget(target);
		}
	}

	IsDamaged = true;
	MyAnim->PlayDamagedMontage();
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * -10.0f);

	if (CurrentState == ECharacterState::DEAD)
	{
		if (EventInstigator->IsPlayerController())
		{
			auto myPlayerController = Cast<AMyPlayerController>(EventInstigator);
			if (myPlayerController != nullptr)
			{
				myPlayerController->NPCKill(this);
			}
		}
	}
	
	ALOG(Warning, TEXT("Monster : %s took Damage : %f"), *GetName(), FinalDamage);
	return FinalDamage;
}

void AMonster::SetCharacterState(ECharacterState NewState)
{
	if (CurrentState == NewState) return;
	CurrentState = NewState;

	switch (CurrentState)
	{
	case ECharacterState::LOADING:
		break;
	case ECharacterState::READY:
		MonsterStat->OnHPIsZero.AddLambda([this]()->void
		{
			SetCharacterState(ECharacterState::DEAD);
		});
		break;
	case ECharacterState::DEAD:
		MyAnim->SetDeadAnim();
		SetActorEnableCollision(false);
		GetController()->UnPossess();
		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]()->void
		{
			Destroy();
		}), DeadTimer, false);


		ItemRandom = FMath::RandRange(0, SpawnItemArray.Num() - 1);

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		FVector SpawnLocation = GetActorLocation();
		SpawnLocation.X += FMath::RandRange(-50.0f, 50.0f);
		SpawnLocation.Y += FMath::RandRange(-50.0f, 50.0f);
		SpawnLocation.Z -= GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		if (SpawnItemArray.Num() > 0)
		{
			ALOG(Warning, TEXT("%f"), SpawnItemArray.Num());
			AItemActor* ItemSpawner = GetWorld()->SpawnActor<AItemActor>(ItemActorBPClass, SpawnLocation, GetActorRotation(), SpawnParams);
			if (ItemSpawner)
			{
				ItemSpawner->SetItem(SpawnItemArray[ItemRandom].GetDefaultObject());
			}
		}

		break;
	}
}

ECharacterState AMonster::GetCharacterState() const
{
	return CurrentState;
}

int32 AMonster::GetExp() const
{
	return MonsterStat->GetDropExp();
}

void AMonster::Attack()
{
	if (!IsDamaged)
	{
		MyAnim->PlayAttackMontage();
		IsAttacking = true;
	}
}

void AMonster::AttackCheck()
{
	
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult, 
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * AttackRange,
		FQuat::Identity, 
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius), Params);

#if ENABLE_DRAW_DEBUG

	/*
	FVector TraceVec = GetActorForwardVector() * AttackRange;
	FVector Center = GetActorLocation() + TraceVec * 0.5f;
	float HalfHeight = AttackRange * 0.5f + AttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;
	DrawDebugCapsule(GetWorld(), Center, HalfHeight,AttackRadius, CapsuleRot, DrawColor, false, DebugLifeTime);
	*/

#endif
	if (bResult)
	{
		if (HitResult.Actor.IsValid() && !IsDamaged) //HitResult.Actor.IsValid()
		{
			FDamageEvent DamageEvent;
			HitResult.Actor->TakeDamage(MonsterStat->GetAttack(), DamageEvent, GetController(), this);
		}
	}
}

void AMonster::OnAttackMontageEnded(UAnimMontage * Montage, bool bInterrupted)
{
	if (IsAttacking)
	{
		IsAttacking = false;
		OnAttackEnd.Broadcast();
	}
}





