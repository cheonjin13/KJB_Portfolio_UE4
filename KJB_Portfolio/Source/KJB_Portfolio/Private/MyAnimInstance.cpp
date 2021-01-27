// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

void UMyAnimInstance::AnimNotify_AttackHit()
{
	OnAttackHitCheck.Broadcast();
}

void UMyAnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}

void UMyAnimInstance::AnimNotify_OnCollision()
{
	OnCollision.Broadcast();
}

void UMyAnimInstance::AnimNotify_OnCollisionEnd()
{
	OnCollisionEnd.Broadcast();
}

FName UMyAnimInstance::GetAttackMontageSectionName(int32 Section)
{
	if (FMath::IsWithinInclusive<int32>(Section, 1, 3))
	{
		return FName(*FString::Printf(TEXT("Attack%d"), Section));
	}
	return NAME_None;
}

UMyAnimInstance::UMyAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	IsDead = false;
	bIsRunning = false;
	
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{	
		if (IsDead) return;
		CurrentDirection = CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());
		auto Character = Cast<ACharacter>(Pawn);
		if (Character != nullptr)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling(); 
			if (Pawn->GetVelocity().Size() > 0)
			{
				if (bIsRunning)
				{
					CurrentPawnSpeed = 100.0f;
					Character->GetCharacterMovement()->MaxWalkSpeed = 700.0f;
				}
				else
				{
					CurrentPawnSpeed = 50.0f;
					Character->GetCharacterMovement()->MaxWalkSpeed = 400.0f;
				}
			}
			else
			{
				CurrentPawnSpeed = 0.0f;
			}
		}
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (IsDead) return;
	if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.0f);
	}
}

void UMyAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	if (IsDead) return;
	if (Montage_IsPlaying(AttackMontage))
	{
		Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
	}
}

void UMyAnimInstance::SetNextSection(int32 NewSection)
{
	if (IsDead) return;
	if (Montage_IsPlaying(AttackMontage))
	{
		FName name = GetAttackMontageSectionName(NewSection);
		Montage_SetNextSection(Montage_GetCurrentSection(), name);
	}

}