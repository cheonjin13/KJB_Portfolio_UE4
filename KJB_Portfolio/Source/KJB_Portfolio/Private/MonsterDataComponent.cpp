// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterDataComponent.h"
#include "MyGameInstance.h"

// Sets default values for this component's properties
UMonsterDataComponent::UMonsterDataComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
	bWantsInitializeComponent = true;

	Level = 1;
}


// Called when the game starts
void UMonsterDataComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UMonsterDataComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(Level);
}


void UMonsterDataComponent::SetNewLevel(int32 NewLevel)
{
	auto myGameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (myGameInstance == nullptr) return;
	CurrentStatData = myGameInstance->GetMonsterStatData(NewLevel);
	if (CurrentStatData == nullptr)
	{
		ALOG(Warning, TEXT("Level(%d) data doesn't exist."), NewLevel);
		return;
	}
	else
	{
		Level = NewLevel;
		SetHP(CurrentStatData->MaxHP);
	}
}

void UMonsterDataComponent::SetHP(float NewHP)
{
	CurrentHP = NewHP;
	OnHPChange.Broadcast();
	if (CurrentHP < KINDA_SMALL_NUMBER)
	{
		CurrentHP = 0.0f;
		OnHPIsZero.Broadcast();
	}
}

float UMonsterDataComponent::GetHPRatio() const
{
	if (CurrentStatData == nullptr) return 0.0f;
	return CurrentHP < KINDA_SMALL_NUMBER ? 0.0f : CurrentHP / CurrentStatData->MaxHP;
}

void UMonsterDataComponent::SetDamage(float NewDamage)
{
	if (CurrentStatData == nullptr) return;
	SetHP(FMath::Clamp<float>(CurrentHP - NewDamage, 0.0f, CurrentStatData->MaxHP));
}

int32 UMonsterDataComponent::GetDropExp() const
{
	return CurrentStatData->DropExp;
}

float UMonsterDataComponent::GetAttack() const
{
	if (CurrentStatData == nullptr) return 0.0f;
	return CurrentStatData->Attack;
}



