// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "MyCharacterDataComponent.h"
#include "Components/WidgetComponent.h"
#include "CharacterWidget.h"
#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "PlayerWidget.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "InventoryComponent.h"
#include "Item.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add("Player");

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);
	GetCapsuleComponent()->SetCapsuleHalfHeight(100.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("MyCharacter"));
	SpringArm->TargetArmLength = 450.0f;
	SpringArm->SetRelativeRotation(FRotator(-25.0f, 0.0f, 0.0f));
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 140.0f));
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = true;

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -100.0f), FRotator(0.0f, -90.0f, 0.0f));
	//WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	//WeaponMesh->SetupAttachment(GetMesh());

	/*
	//SkeletalMesh'/Game/MyContents/Character/Resource/paladin_prop_j_nordstrom.paladin_prop_j_nordstrom'
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_PALADIN(TEXT("/Game/MyContents/Character/Resource/paladin_prop_j_nordstrom.paladin_prop_j_nordstrom"));
	if (SK_PALADIN.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_PALADIN.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	//AnimBlueprint'/Game/MyContents/Character/Animation/Paladin_AnimBP.Paladin_AnimBP'
	static ConstructorHelpers::FClassFinder<UAnimInstance> PALADIN_ANIM(TEXT("/Game/MyContents/Character/Animation/Paladin_AnimBP.Paladin_AnimBP_C"));
	if (PALADIN_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(PALADIN_ANIM.Class);
	}
	*/

	//
	static ConstructorHelpers::FObjectFinder<UParticleSystem> HITEFFECT(TEXT("ParticleSystem'/Game/InfinityBladeEffects/Effects/FX_Combat_Base/Impact/P_ImpactSpark.P_ImpactSpark'"));
	if (HITEFFECT.Succeeded())
	{
		HitEffect = HITEFFECT.Object;
	}

	HitCheck = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ATTACKCHECK"));
	HitCheck->SetupAttachment(GetMesh(), TEXT("sword_bottom"));
	HitCheck->SetCapsuleHalfHeight(70.0f);
	HitCheck->SetCapsuleRadius(10.0f);
	HitCheck->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	IsAttacking = false;
	AttackRange = 200.0f;
	AttackRadius = 50.0f;
	MaxCombo = 3;
	AttackEndComboState();

	CharacterStat = CreateDefaultSubobject<UMyCharacterDataComponent>(TEXT("CHARACTERSTAT"));	
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
	HPBarWidget->SetHiddenInGame(true);

	DeadTimer = 5.0f;
	
	//인벤토리
	InventoryComp = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComp"));
	InventoryComp->Capacity = 20;

	
	IsShowInventory = false;
}

void AMyCharacter::UseItem(UItem * Item)
{
	if (Item)
	{
		Item->Use(this);
		Item->OnUse(this);
	}
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	auto CharacterWidget = Cast<UCharacterWidget>(HPBarWidget->GetUserWidgetObject());
	if (CharacterWidget != nullptr)
	{
		CharacterWidget->BindCharacterStat(CharacterStat);
	}
	auto myPlayerState = Cast<AMyPlayerState>(GetPlayerState());
	if (myPlayerState != nullptr)
	{
		CharacterStat->SetNewLevel(myPlayerState->GetCharacterLevel());
		myPlayerState->OnPlayerLevelChanged.AddUObject(this, &AMyCharacter::UpdateCharacterStat);
	}
	if (IsPlayerControlled())
	{
		MyPlayerController = Cast<AMyPlayerController>(GetController());
		if (MyPlayerController != nullptr)
		{
			MyPlayerController->GetHUDWidget()->BindCharacterStat(CharacterStat);
		}
	}

	
}


// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	MyAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (MyAnim != nullptr)
	{
		MyAnim->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackMontageEnded);

		MyAnim->OnNextAttackCheck.AddLambda([this]()->void
		{
			CanNextCombo = false;

			if (IsComboInputOn)
			{
				AttackStartComboState();
				MyAnim->JumpToAttackMontageSection(CurrentCombo);
			}
		});

		MyAnim->OnCollision.AddLambda([this]()->void
		{
			HitCheck->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		});

		MyAnim->OnCollisionEnd.AddLambda([this]()->void
		{
			HitCheck->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		});
	}

	

	//MyAnim->OnAttackHitCheck.AddUObject(this, &AMyCharacter::AttackCheck);
	
	HitCheck->OnComponentBeginOverlap.AddDynamic(this, &AMyCharacter::HitCheckOverlapBegin);

	
	CharacterStat->OnHPIsZero.AddLambda([this]()->void 
	{
		MyAnim->SetDeadAnim();
		SetActorEnableCollision(false);	
		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]()->void
		{
			MyPlayerController->RestartLevel();
		}), DeadTimer, false);
	});


}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMyCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMyCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AMyCharacter::Attack);

	PlayerInputComponent->BindAction(TEXT("Running"), EInputEvent::IE_Pressed, this, &AMyCharacter::Running);
	PlayerInputComponent->BindAction(TEXT("Running"), EInputEvent::IE_Released, this, &AMyCharacter::Running);

	PlayerInputComponent->BindAction(TEXT("ShowInventory"), EInputEvent::IE_Pressed, this, &AMyCharacter::ShowInventory);
}

float AMyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	CharacterStat->SetDamage(FinalDamage);
	ALOG(Warning, TEXT("Actor : %s took Damage : %f"), *GetName(), FinalDamage);
	return FinalDamage;
}



void AMyCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(
		FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X), NewAxisValue);
}
void AMyCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(
		FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::Y), NewAxisValue);	
}
void AMyCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
void AMyCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AMyCharacter::Running()
{
	MyAnim->bIsRunning = !MyAnim->bIsRunning;
}

void AMyCharacter::ShowInventory()
{
	
	IsShowInventory = !IsShowInventory;

	if (IsShowInventory)
	{
		if (InventoryBPClass != nullptr)
		{
			APlayerController* controller = Cast<APlayerController>(Controller);
			if (controller == nullptr) return;
			InventoryWidget = CreateWidget<UUserWidget>(controller, InventoryBPClass);
			InventoryWidget->AddToViewport();

			FInputModeGameAndUI Inputmode;
			controller->bShowMouseCursor = true;
			controller->SetInputMode(Inputmode);

		}
	}
	else
	{
		if (InventoryWidget != nullptr)
		{
			InventoryWidget->RemoveFromParent();
			APlayerController* controller = Cast<APlayerController>(Controller);
			if (controller == nullptr) return;
			FInputModeGameOnly Inputmode;
			controller->bShowMouseCursor = false;
			controller->SetInputMode(Inputmode);
		}
	}
}


void AMyCharacter::Attack()
{
	if (IsAttacking)
	{
		if (FMath::IsWithinInclusive<int32>(CurrentCombo, 1, MaxCombo))
		{
			if (CanNextCombo)
			{
				IsComboInputOn = true;
			}
		}
	}
	else
	{
		if (CurrentCombo == 0)
		{
			AttackStartComboState();
			MyAnim->PlayAttackMontage();
			MyAnim->JumpToAttackMontageSection(CurrentCombo);
			IsAttacking = true;
		}
	}
}

void AMyCharacter::AttackCheck()
{
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(HitResult, GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * AttackRange,
		FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius), Params);
#if ENABLE_DRAW_DEBUG

	FVector TraceVec = GetActorForwardVector() * AttackRange;
	FVector Center = GetActorLocation() + TraceVec * 0.5f;
	float HalfHeight = AttackRange * 0.5f + AttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;

	DrawDebugCapsule(GetWorld(),Center, HalfHeight,
		AttackRadius, CapsuleRot, DrawColor, false, DebugLifeTime);
#endif
	if (bResult)
	{
		if (HitResult.Actor.IsValid())
		{
			FDamageEvent DamageEvent;
			HitResult.Actor->TakeDamage(CharacterStat->GetAttack(), DamageEvent, GetController(), this);

		}
	}
}

void AMyCharacter::OnAttackMontageEnded(UAnimMontage * Montage, bool bInterrupted)
{
	if (IsAttacking)
	{
		if (CurrentCombo > 0)
		{
			IsAttacking = false;
			AttackEndComboState();
			OnAttackEnd.Broadcast();
			HitCheck->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

void AMyCharacter::AttackStartComboState()
{
	CanNextCombo = true;
	IsComboInputOn = false;
	if (FMath::IsWithinInclusive<int32>(CurrentCombo, 0, MaxCombo - 1))
	{
		CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
	}
}

void AMyCharacter::AttackEndComboState()
{
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}

void AMyCharacter::UpdateCharacterStat()
{
	auto myPlayerState = Cast<AMyPlayerState>(GetPlayerState());
	if (myPlayerState != nullptr)
	{
		CharacterStat->SetNewLevel(myPlayerState->GetCharacterLevel());
	}
}

void AMyCharacter::HitCheckOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	FVector OverlapLocation = OverlappedComp->GetComponentLocation();
	FTransform OverlapTransform = OtherActor->GetActorTransform();
	if (OtherActor->ActorHasTag("Monster"))
	{
		FDamageEvent DamageEvent;
		OtherActor->TakeDamage(CharacterStat->GetAttack(), DamageEvent, GetController(), this);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, OverlapTransform, true);
		
	}
}
