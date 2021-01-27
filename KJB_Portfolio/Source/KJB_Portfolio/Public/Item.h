// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EItemType : uint8
{
	ITEM_NONE,
	ITEM_USABLE,
	ITEM_EQUIPMENT
};

UCLASS(Abstract, Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew)
class KJB_PORTFOLIO_API UItem : public UObject
{
	GENERATED_BODY()
	
public:
	UItem();

	// 아이템의 공간 
	UPROPERTY(Transient)
	class UWorld* World;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	EItemType Type;

	//사용 툴팁 (장착 - equip, 소비 - use, 기타 - etc)
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	FText UseActionText;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	class UStaticMesh* PickupMesh;

	//아이템 이미지
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	class UTexture2D* Thumbnail;

	//아이템 이름
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item")
	FText ItemDisplayName;

	//아이템 상세 설명
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item", meta = (MultiLine = true))
	FText ItemDescription;

	//아이템 수량
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	int Count;

	//아이템 무게
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item", meta = (ClampMin = 0.00))
	float Weight;

	//아이템은 인벤토리 구성요소 내부에 존재하기때문에 참조하기 위한.
	UPROPERTY()
	class UInventoryComponent* OwningInventory;


	virtual void Use(class AMyCharacter* Character) {};

	//블루프린트용 USE 이벤트
	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(class AMyCharacter* Character);
};
