// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameDatas.generated.h"

/**
 * 
 */



UENUM(BlueprintType)
enum class EItemTypes : uint8
{
	ITEM_NONE		UMETA(DisplayName = "None"),
	ITEM_USEABLE	UMETA(DisplayName = "Useable"),
	ITEM_Equipment	UMETA(DisplayName = "Equipment"),
};

USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()

public:
	FItemData() : Name(""), Thumbnail(nullptr), Type(EItemTypes::ITEM_NONE), Count(0) {};

	virtual void Clear();
	virtual void Use(class AMyCharacter* player);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UTexture2D* Thumbnail;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EItemTypes Type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Count;
};

UCLASS()
class KJB_PORTFOLIO_API UGameDatas : public UObject
{
	GENERATED_BODY()
	
};
