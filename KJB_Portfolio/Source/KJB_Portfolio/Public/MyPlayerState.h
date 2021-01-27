// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPlayerStateChangedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnPlayerLevelChangedDelegate);

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AMyPlayerState();

	int32 GetCharacterLevel() const;
	float GetExpRatio() const;
	bool AddExp(int32 IncomeExp);
	
	void InitPlayerData();

public:
	FOnPlayerStateChangedDelegate OnPlayerStateChanged;
	FOnPlayerLevelChangedDelegate OnPlayerLevelChanged;
protected:
	UPROPERTY(Transient)
	int32 CharacterLevel;
	UPROPERTY(Transient)
	int32 Exp;

private:
	void SetCharacterLevel(int32 NewCharacterLevel);
	struct FPlayerStatData* CurrentStatData;

};
