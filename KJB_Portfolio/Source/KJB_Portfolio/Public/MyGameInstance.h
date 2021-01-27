// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMonsterStatData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FMonsterStatData() : Level(1), MaxHP(100.0f), Attack(20.0f), Defense(10.0f), DropExp(10.0f) {}
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 Level;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float MaxHP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float Attack;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float Defense;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 DropExp;
};

USTRUCT(BlueprintType)
struct FPlayerStatData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FPlayerStatData() : Level(1), MaxHP(100.0f), MaxMP(50.0f), Attack(30.0f), Defense(10.0f), Exp(0), MaxExp(20) {}
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 Level;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float MaxHP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float MaxMP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float Attack;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	float Defense;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 Exp;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	int32 MaxExp;
};

UCLASS()
class KJB_PORTFOLIO_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UMyGameInstance();
	virtual void Init() override;
	FPlayerStatData* GetPlayerStatData(int32 Level);
	FMonsterStatData* GetMonsterStatData(int32 Level);
private:
	UPROPERTY()
	class UDataTable* PlayerStatTable;
	UPROPERTY()
	class UDataTable* MonsterStatTable;
};
