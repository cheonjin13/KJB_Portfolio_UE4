// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	AMyPlayerController();
protected:
	virtual void BeginPlay() override;
};
