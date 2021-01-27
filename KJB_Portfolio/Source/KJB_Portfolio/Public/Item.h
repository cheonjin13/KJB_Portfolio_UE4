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

	// �������� ���� 
	UPROPERTY(Transient)
	class UWorld* World;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	EItemType Type;

	//��� ���� (���� - equip, �Һ� - use, ��Ÿ - etc)
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	FText UseActionText;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	class UStaticMesh* PickupMesh;

	//������ �̹���
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	class UTexture2D* Thumbnail;

	//������ �̸�
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item")
	FText ItemDisplayName;

	//������ �� ����
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item", meta = (MultiLine = true))
	FText ItemDescription;

	//������ ����
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	int Count;

	//������ ����
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Item", meta = (ClampMin = 0.00))
	float Weight;

	//�������� �κ��丮 ������� ���ο� �����ϱ⶧���� �����ϱ� ����.
	UPROPERTY()
	class UInventoryComponent* OwningInventory;


	virtual void Use(class AMyCharacter* Character) {};

	//�������Ʈ�� USE �̺�Ʈ
	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(class AMyCharacter* Character);
};
