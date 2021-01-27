// Fill out your copyright notice in the Description page of Project Settings.


#include "CanAttackBTDeco.h"
#include "MyCharacter.h"
#include "MyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UCanAttackBTDeco::UCanAttackBTDeco()
{
	NodeName = TEXT("CanAttack");
}

bool UCanAttackBTDeco::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();

	auto Target = Cast<AMyCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMyAIController::TargetKey));
	if (Target == nullptr) return false;
	
	bResult = Target->GetDistanceTo(ControllingPawn) <= 200.0f ? true : false;
	return bResult;
}
