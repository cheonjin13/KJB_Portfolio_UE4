// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void BindCharacterStat(class UMyCharacterDataComponent* NewDataStat);
	void BindMonsterStat(class UMonsterDataComponent* NewDataStat);
private:
	TWeakObjectPtr<class UMyCharacterDataComponent> CurrentCharacterStat;
	TWeakObjectPtr<class UMonsterDataComponent> CurrentMonsterStat;
	UPROPERTY()
	class UProgressBar* HPProgressBar;

protected:
	virtual void NativeConstruct() override;
	void UpdateHPWidget();
};
