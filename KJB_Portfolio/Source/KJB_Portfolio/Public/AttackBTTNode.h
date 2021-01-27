// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AttackBTTNode.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UAttackBTTNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UAttackBTTNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
private:
	bool IsAttacking = false;
	
};
