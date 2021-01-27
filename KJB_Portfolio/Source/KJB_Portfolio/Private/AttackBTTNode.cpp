// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackBTTNode.h"
#include "Monster.h"
#include "MyAIController.h"

UAttackBTTNode::UAttackBTTNode()
{
	bNotifyTick = true;
	IsAttacking = false;
	NodeName = TEXT("Attack");
}

EBTNodeResult::Type UAttackBTTNode::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto myCharacter = Cast<AMonster>(OwnerComp.GetAIOwner()->GetPawn());
	myCharacter->Attack();
	IsAttacking = true;
	myCharacter->OnAttackEnd.AddLambda([this]()->void 
	{
		IsAttacking = false;
	});

	return EBTNodeResult::InProgress;
}

void UAttackBTTNode::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (!IsAttacking)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
