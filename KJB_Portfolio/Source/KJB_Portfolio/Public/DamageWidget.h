// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageWidget.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UDamageWidget : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY()
	class UTextBlock* DamageText;
	UPROPERTY(Meta = (BindWidgetAnim), Meta = (AllowPrivateAccess = true))
	class UWidgetAnimation* Fade;
public:
	virtual void NativeConstruct() override;
	void UpdateDamageBlock(FText text);
};
