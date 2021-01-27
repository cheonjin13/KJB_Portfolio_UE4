// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "DetectBTS.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UDetectBTS : public UBTService
{
	GENERATED_BODY()
	
public:
	UDetectBTS();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
