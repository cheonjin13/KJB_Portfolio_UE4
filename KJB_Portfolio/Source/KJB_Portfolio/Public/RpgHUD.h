// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/HUD.h"
#include "RpgHUD.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API ARpgHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARpgHUD();
	virtual void DrawHUD() override;
private:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrossHair;
};
