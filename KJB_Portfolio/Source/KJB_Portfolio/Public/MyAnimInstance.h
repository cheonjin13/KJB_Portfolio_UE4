// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
private:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	bool IsInAir;
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Attack", meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;

private: //함수
	UFUNCTION()
	void AnimNotify_AttackHit();

public: //변수
	FOnAttackHitCheckDelegate OnAttackHitCheck;

public: 
	UMyAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	void PlayAttackMontage();
};
