// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"
#include "MyGameInstance.h"

AMyPlayerState::AMyPlayerState()
{
	CharacterLevel = 1;
	Exp = 0;
}

int32 AMyPlayerState::GetCharacterLevel() const
{
	return CharacterLevel;
}

float AMyPlayerState::GetExpRatio() const
{
	if(CurrentStatData->MaxExp <= KINDA_SMALL_NUMBER)
		return 0.0f;

	float Result = (float)Exp / (float)CurrentStatData->MaxExp;
	ALOG(Warning, TEXT("Ratio : %f, Current : %d, Max : %d"), Result, Exp, CurrentStatData->MaxExp);

	return Result;
}

bool AMyPlayerState::AddExp(int32 IncomeExp)
{
	if(CurrentStatData->MaxExp == -1)
		return false;

	bool DidLevelUp = false;
	Exp += IncomeExp;
	if (Exp >= CurrentStatData->MaxExp)
	{
		Exp -= CurrentStatData->MaxExp;
		SetCharacterLevel(CharacterLevel + 1);
		DidLevelUp = true;
		OnPlayerLevelChanged.Broadcast();
	}

	OnPlayerStateChanged.Broadcast();
	return DidLevelUp;
}

void AMyPlayerState::InitPlayerData()
{
	SetPlayerName(TEXT("UNKNOWN"));
	SetCharacterLevel(2);
	Exp = 0;
}

void AMyPlayerState::SetCharacterLevel(int32 NewCharacterLevel)
{
	auto myGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if (myGameInstance != nullptr)
	{
		CurrentStatData = myGameInstance->GetPlayerStatData(NewCharacterLevel);
		if (CurrentStatData != nullptr)
		{
			CharacterLevel = NewCharacterLevel;
		}
	}
}
