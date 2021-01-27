// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UICustom.h"
#include "Slot.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ESlotType : uint8
{
	SLOT_NONE		UMETA(DisplayName = "None"),
	SLOT_ITEM		UMETA(DisplayName = "Item"),
	SLOT_SKILL		UMETA(DisplayName = "Skill"),
	SLOT_Quick		UMETA(DisplayName = "Quick"),
	SLOT_Q_ITEM		UMETA(DisplayName = "Q_Item"),
	SLOT_Q_SKILL	UMETA(DisplayName = "Q_Skill"),
};

UCLASS()
class KJB_PORTFOLIO_API USlot : public UUICustom
{
	GENERATED_BODY()
	
public:
	void Init() override;
	void SetType(ESlotType type);
	void SetTexture(UTexture2D* tex);
	void Refresh();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (UIMax = 31.00, UIMin = 0.00))
		int SlotNum;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		int Count;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		ESlotType Type;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		class UImage* Img;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
		class UTextBlock* CountText;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<USlot> DragVisualClass;

protected:
	void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation);
	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
};
