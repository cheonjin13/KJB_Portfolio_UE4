// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UItemWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetItemText(FText text);
private:
	class UTextBlock* ItemName;

protected:
	virtual void NativeConstruct() override;
};
