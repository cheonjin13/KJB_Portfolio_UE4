// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Components/ActorComponent.h"
#include "MonsterDataComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHPChangeDelegate);
DECLARE_MULTICAST_DELEGATE(FOnHPIsZeroDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KJB_PORTFOLIO_API UMonsterDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMonsterDataComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;

public:
	void SetNewLevel(int32 NewLevel);
	void SetHP(float NewHP);
	void SetDamage(float NewDamage);
	float GetHPRatio() const;
	float GetAttack() const;
	int32 GetDropExp() const;

public:
	FOnHPChangeDelegate OnHPChange;
	FOnHPIsZeroDelegate OnHPIsZero;
private:
	struct FMonsterStatData* CurrentStatData = nullptr;
	UPROPERTY(EditInstanceOnly, Category = "Stat", meta = (AllowPrivateAccess = true))
	int32 Level;
	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Stat", meta = (AllowPrivateAccess = true))
	float CurrentHP;
		
};
