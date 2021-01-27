// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageWidgetActor.h"
#include "DamageWidget.h"
#include "Components/WidgetComponent.h"

// Sets default values
ADamageWidgetActor::ADamageWidgetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamageWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("DAMAGEWIDGET"));
	DamageWidget->SetupAttachment(RootComponent);
	DamageWidget->SetWidgetSpace(EWidgetSpace::Screen);
	
	//WidgetBlueprint'/Game/MyContents/UI/UI_Damage.UI_Damage'
	static ConstructorHelpers::FClassFinder<UDamageWidget> UI_DAMAGE(TEXT("/Game/MyContents/UI/UI_Damage.UI_Damage_C"));
	if (UI_DAMAGE.Succeeded())
	{
		DamageWidget->SetWidgetClass(UI_DAMAGE.Class);
	}

	DestroyTimer = 3.0f;
}


void ADamageWidgetActor::SetDamageText(FText text)
{
	auto damageblock = Cast<UDamageWidget>(DamageWidget->GetUserWidgetObject());
	if (damageblock != nullptr)
	{
		damageblock->UpdateDamageBlock(text);
	}

	InitialLocation = DamageWidget->GetRelativeLocation();
	FinalLocation = InitialLocation + FVector(0.0f, 0.0f, 100.0f);
}

// Called when the game starts or when spawned
void ADamageWidgetActor::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, FTimerDelegate::CreateLambda([this]()->void
	{
		Destroy();
	}), DestroyTimer, false);
}

// Called every frame
void ADamageWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	InitialLocation = FMath::Lerp<FVector>(InitialLocation, FinalLocation, DeltaTime);
	DamageWidget->SetRelativeLocation(InitialLocation);
}

