// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Components/ActorComponent.h"
#include "MyCharacterDataComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHPChangeDelegate);
DECLARE_MULTICAST_DELEGATE(FOnHPIsZeroDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KJB_PORTFOLIO_API UMyCharacterDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyCharacterDataComponent();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;

public:	
	void SetNewLevel(int32 NewLevel);
	void SetHP(float NewHP);
	float GetHPRatio();
	void SetDamage(float NewDamage);
	float GetAttack();
	void SetHPUsePotion(float PotionPoint);
		
public:
	FOnHPChangeDelegate OnHPChange;
	FOnHPIsZeroDelegate OnHPIsZero;
private:
	struct FPlayerStatData* CurrentStatData = nullptr;
	UPROPERTY(EditInstanceOnly, Category = "Stat", meta = (AllowPrivateAccess = true))
	int32 Level;
	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Stat", meta = (AllowPrivateAccess = true))
	float CurrentHP;
};
