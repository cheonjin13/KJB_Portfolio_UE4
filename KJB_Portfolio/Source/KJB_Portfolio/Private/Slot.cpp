// Fill out your copyright notice in the Description page of Project Settings.


#include "Slot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "SlotDragDrop.h"
#include "MyCharacter.h"

/*
void USlot::Init()
{
	Refresh();
}

void USlot::SetType(ESlotType type)
{
	Type = type;
}

void USlot::SetTexture(UTexture2D * tex)
{
	if (tex == nullptr) return;
	
	Img->SetBrushFromTexture(tex);
}

void USlot::Refresh()
{
	switch (Type)
	{
		case ESlotType::SLOT_ITEM:
		{
			FItemData& data = Player->Inventory[SlotNum];

			if (data.Thumbnail != nullptr)
			{
				SetTexture(data.Thumbnail);
			}

			Count = data.Count;
			//ALOG(Warning, TEXT("SlotNum : %d, Count : %d"), SlotNum, Count);
			if (Count <= 1)
			{
				CountText->SetVisibility(ESlateVisibility::Hidden);							
			}
			else
			{
				CountText->SetVisibility(ESlateVisibility::Visible);
				CountText->SetText(FText::FromString(FString::FromInt(Count)));
			}
			break;
		}
		case ESlotType::SLOT_SKILL:
		{

			break;
		}
	}
}

void USlot::NativeOnDragDetected(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent, UDragDropOperation *& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (OutOperation == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging Start"));

		USlotDragDrop* oper = NewObject<USlotDragDrop>();
		OutOperation = oper;
		oper->FromNum = this->SlotNum;
		oper->Type = this->Type;

		if (DragVisualClass != nullptr)
		{
			USlot* visual = CreateWidget<USlot>(Cast<APlayerController>(Player->Controller), DragVisualClass);
			visual->Type = this->Type;
			visual->Player = this->Player;
			visual->SlotNum = this->SlotNum;
			visual->Refresh();
			oper->DefaultDragVisual = visual;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging Again"));
	}
}

bool USlot::NativeOnDrop(const FGeometry & InGeometry, const FDragDropEvent & InDragDropEvent, UDragDropOperation * InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	USlotDragDrop* oper = Cast<USlotDragDrop>(InOperation);

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging End"));

	if (oper != nullptr)
	{
		Player->DraggingSwap(oper->FromNum, oper->Type, this->SlotNum, this->Type);
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging Success"));
		return true;
	}
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Draging Fail"));
	return false;
}

FReply USlot::NativeOnMouseButtonDown(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	FEventReply reply;
	reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
	{
		if (Player->Inventory[SlotNum].Type == EItemTypes::ITEM_NONE) return reply.NativeReply;

		switch (Type)
		{
		case ESlotType::SLOT_NONE: case ESlotType::SLOT_Quick: return reply.NativeReply; break;
		case ESlotType::SLOT_ITEM: case ESlotType::SLOT_Q_ITEM: Player->Inventory[SlotNum].Use(Player); break;
		case ESlotType::SLOT_SKILL: case ESlotType::SLOT_Q_SKILL: break;
		}
		Refresh();
	}
	else if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Drag : Left Dutton Down"));

		switch (Type)
		{
			case ESlotType::SLOT_NONE: case ESlotType::SLOT_Quick: break;
			case ESlotType::SLOT_ITEM: case ESlotType::SLOT_Q_ITEM:
			{
				if (Player->Inventory[SlotNum].Type != EItemTypes::ITEM_NONE)
					reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
				break;
			}
		}
	}

	return reply.NativeReply;
}
*/
