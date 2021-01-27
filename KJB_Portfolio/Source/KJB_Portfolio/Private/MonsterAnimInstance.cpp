// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAnimInstance.h"

void UMonsterAnimInstance::AnimNotify_AttackHit()
{
	OnAttackHitCheck.Broadcast();
}

void UMonsterAnimInstance::AnimNotify_Anim_End()
{
	OnAnimEndCheck.Broadcast();
}

UMonsterAnimInstance::UMonsterAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsDead = false;
}

void UMonsterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		if (IsDead) return;
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
	}
}

void UMonsterAnimInstance::PlayAttackMontage()
{
	if (IsDead) return;
	if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.0f);
	}
}

void UMonsterAnimInstance::PlayDamagedMontage()
{
	if (IsDead) return;
	Montage_Play(DamagedMontage, 1.0f);
}
