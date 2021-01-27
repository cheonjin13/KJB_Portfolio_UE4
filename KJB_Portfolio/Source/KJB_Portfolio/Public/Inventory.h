// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "UICustom.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UInventory : public UUICustom
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void RefreshSlot(int slotnum);
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* DefaultTexture;

private:
	TArray<class USlot*> Slots;
};
