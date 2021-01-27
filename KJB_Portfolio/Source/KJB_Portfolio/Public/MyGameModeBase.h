// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameModeBase();
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
