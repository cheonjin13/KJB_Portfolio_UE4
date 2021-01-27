// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void BindCharacterStat(class UMyCharacterDataComponent* NewDataStat);
	void BindPlayerState(class AMyPlayerState* PlayerState);
private:
	TWeakObjectPtr<class UMyCharacterDataComponent> CurrentCharacterStat;
	TWeakObjectPtr<class AMyPlayerState> CurrentPlayerState;
	UPROPERTY()
	class UProgressBar* HPProgressBar;
	UPROPERTY()
	class UProgressBar* ExpBar;
	UPROPERTY()
	class UTextBlock* PlayerLevel;
	UPROPERTY()
	class UTextBlock* ExpPercent;
protected:
	virtual void NativeConstruct() override;
	void UpdateHPWidget();
	void UpdatePlayerState();
};
