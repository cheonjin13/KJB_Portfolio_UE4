// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TurnBTTNode.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UTurnBTTNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UTurnBTTNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
