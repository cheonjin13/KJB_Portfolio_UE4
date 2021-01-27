// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Animation/AnimInstance.h"
#include "MonsterAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAnimEndCheckDelegate);

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API UMonsterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
private:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	bool IsDead;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	UAnimMontage* DamagedMontage;


public:

	FOnAttackHitCheckDelegate OnAttackHitCheck;
	FOnAnimEndCheckDelegate OnAnimEndCheck;

	UFUNCTION()
	void AnimNotify_AttackHit();
	UFUNCTION()
	void AnimNotify_Anim_End();

public:
	UMonsterAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	void PlayAttackMontage();
	void PlayDamagedMontage();
	void SetDeadAnim()
	{
		IsDead = true;
	}
};
