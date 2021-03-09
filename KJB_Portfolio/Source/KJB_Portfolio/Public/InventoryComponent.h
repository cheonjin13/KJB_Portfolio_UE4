// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdatedDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KJB_PORTFOLIO_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UFUNCTION(BlueprintCallable)
	bool AddItem(class UItem* Item);

	UFUNCTION(BlueprintCallable)
	bool RemoveItem(class UItem* Item);
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:

	UPROPERTY(EditDefaultsOnly, Instanced)
	TArray<class UItem*> DefaultItems;

	//인벤토리 용량
	UPROPERTY(EditDefaultsOnly, Category = "inventory")
	int32 Capacity;

	// UI 업데이트를 위한 델리게이트
	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryUpdatedDelegate OnInventoryUpdated;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Items")
	TArray<class UItem*> Items;
};
