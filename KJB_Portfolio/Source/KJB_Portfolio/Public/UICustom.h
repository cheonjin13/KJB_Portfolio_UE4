// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UICustom.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UUICustom : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void Init() {};

public:
	class AMyCharacter* Player;
};
