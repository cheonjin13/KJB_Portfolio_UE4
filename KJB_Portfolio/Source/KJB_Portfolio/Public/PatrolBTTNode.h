// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PatrolBTTNode.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UPatrolBTTNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPatrolBTTNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
