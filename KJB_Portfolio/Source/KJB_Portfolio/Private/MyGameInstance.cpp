// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance()
{
	//DataTable'/Game/MyContents/Data/PlayerStatData.PlayerStatData'
	FString PlayerStatDataPath = TEXT("/Game/MyContents/Data/PlayerStatData.PlayerStatData");
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_PLAYERSTAT(*PlayerStatDataPath);
	if (DT_PLAYERSTAT.Succeeded())
	{
		PlayerStatTable = DT_PLAYERSTAT.Object;
	}
	//DataTable'/Game/MyContents/Data/MonsterStatData.MonsterStatData'
	FString MonsterStatDataPath = TEXT("/Game/MyContents/Data/MonsterStatData.MonsterStatData");
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MONSTERSTAT(*MonsterStatDataPath);
	if (DT_MONSTERSTAT.Succeeded())
	{
		MonsterStatTable = DT_MONSTERSTAT.Object;
	}
}

void UMyGameInstance::Init()
{
	Super::Init();
	ALOG(Warning, TEXT("Attack of Level 25 Player : %d"), GetPlayerStatData(20)->Attack);
}

FPlayerStatData* UMyGameInstance::GetPlayerStatData(int32 Level)
{
	return PlayerStatTable->FindRow<FPlayerStatData>(*FString::FromInt(Level), TEXT(""));
}

FMonsterStatData * UMyGameInstance::GetMonsterStatData(int32 Level)
{
	return MonsterStatTable->FindRow<FMonsterStatData>(*FString::FromInt(Level), TEXT(""));
}
