// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "UsableItem.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UUsableItem : public UItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item", meta = (ClampMin = 0.00))
	float HPPotionPoint;

protected:
	virtual void Use(class AMyCharacter* Character) override;
};
