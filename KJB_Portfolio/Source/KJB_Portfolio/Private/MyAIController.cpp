// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

const FName AMyAIController::HomePosKey(TEXT("HomePos"));
const FName AMyAIController::TargetKey(TEXT("Target"));
const FName AMyAIController::PatrolPosKey(TEXT("PatrolPos"));

AMyAIController::AMyAIController()
{
	//BehaviorTree'/Game/MyContents/Character/AI/BT_Monster.BT_Monster'
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("/Game/MyContents/Character/AI/BT_Monster.BT_Monster"));
	if (BTObject.Succeeded())
	{
		BTAsset = BTObject.Object;
	}

	//BlackboardData'/Game/MyContents/Character/AI/BB_Monster.BB_Monster'
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("/Game/MyContents/Character/AI/BB_Monster.BB_Monster"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
	}

}

void AMyAIController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
	if (UseBlackboard(BBAsset, Blackboard))
	{
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());
		if (!RunBehaviorTree(BTAsset))
		{
			ALOG(Error, TEXT("AIController couldn't run behavior tree"));			
		}
	}
}

void AMyAIController::OnUnPossess()
{
	Super::OnUnPossess();
}
