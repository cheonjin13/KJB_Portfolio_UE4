// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBTTNode.h"
#include "Monster.h"
#include "MyCharacter.h"
#include "MyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UTurnBTTNode::UTurnBTTNode()
{
	NodeName = TEXT("Turn");
}

EBTNodeResult::Type UTurnBTTNode::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return EBTNodeResult::Failed;

	auto Target = Cast<AMyCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AMyAIController::TargetKey));
	if (Target == nullptr) return EBTNodeResult::Failed;

	FVector LookVector = Target->GetActorLocation() - ControllingPawn->GetActorLocation();
	LookVector.Z = 0.0f;
	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	ControllingPawn->SetActorRotation(FMath::RInterpTo(
		ControllingPawn->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 2.0f));

	return EBTNodeResult::Succeeded;
}
