// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "UICustom.h"
#include "GameInterface.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UGameInterface : public UUICustom
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void SetPlayer(AMyCharacter* player);
	void RefreshInventory(int slotnum);
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "UI", meta = (BindWidget))
	class UInventory* Inventory;
};
