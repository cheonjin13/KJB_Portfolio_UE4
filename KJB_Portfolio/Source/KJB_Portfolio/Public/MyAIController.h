// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API AMyAIController : public AAIController
{
	GENERATED_BODY()
public:
	AMyAIController();
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
public: //Static const Key
	static const FName HomePosKey;
	static const FName TargetKey;
	static const FName PatrolPosKey;

private:
	UPROPERTY()
	class UBehaviorTree* BTAsset;
	UPROPERTY()
	class UBlackboardData* BBAsset;
};
