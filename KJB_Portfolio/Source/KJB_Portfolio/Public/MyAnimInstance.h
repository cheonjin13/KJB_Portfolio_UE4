// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackHitCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnNextAttackCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnCollisionDelegate);
DECLARE_MULTICAST_DELEGATE(FOnCollisionEndDelegate);
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
	float CurrentDirection;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	bool IsInAir;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Pawn", meta = (AllowPrivateAccess = true))
	bool IsDead;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Attack", meta = (AllowPrivateAccess = true))
	UAnimMontage* AttackMontage;

private: //함수
	UFUNCTION()
	void AnimNotify_AttackHit();
	UFUNCTION()
	void AnimNotify_NextAttackCheck();
	UFUNCTION()
	void AnimNotify_OnCollision();
	UFUNCTION()
	void AnimNotify_OnCollisionEnd();
	FName GetAttackMontageSectionName(int32 Section);

public: //변수
	FOnAttackHitCheckDelegate	OnAttackHitCheck;
	FOnNextAttackCheckDelegate	OnNextAttackCheck;
	FOnCollisionDelegate		OnCollision;
	FOnCollisionEndDelegate		OnCollisionEnd;
	bool bIsRunning; 

public: 
	UMyAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	void PlayAttackMontage();
	void JumpToAttackMontageSection(int32 NewSection);
	void SetNextSection(int32 NewSection);
	void SetDeadAnim()
	{
		IsDead = true;
	}
};
