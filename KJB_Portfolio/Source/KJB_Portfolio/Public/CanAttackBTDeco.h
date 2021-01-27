// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "BehaviorTree/BTDecorator.h"
#include "CanAttackBTDeco.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UCanAttackBTDeco : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UCanAttackBTDeco();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
