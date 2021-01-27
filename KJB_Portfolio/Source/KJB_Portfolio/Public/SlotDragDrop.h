// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "Slot.h"
#include "SlotDragDrop.generated.h"


/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API USlotDragDrop : public UDragDropOperation
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	int FromNum;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	ESlotType Type;
};
