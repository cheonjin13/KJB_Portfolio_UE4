// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "Slot.h"
#include "Blueprint/WidgetTree.h"
#include "MyCharacter.h"

void UInventory::Init()
{
	for (int i = 0; i < Player->InventorySize; i++)
	{
		if (Player->Inventory[i].Type == EItemTypes::ITEM_NONE)
		{
			Player->Inventory[i].Thumbnail = DefaultTexture;
		}
	}
	Slots.Init(nullptr, 32);
	TArray<UWidget*> widgets;
	WidgetTree->GetAllWidgets(widgets);

	USlot* slot = nullptr;
	for (auto widget : widgets)
	{
		slot = Cast<USlot>(widget);

		if (!slot) continue;
		slot->Player = this->Player;
		slot->SetType(ESlotType::SLOT_ITEM);
		slot->Init();
		Slots[slot->SlotNum] = slot;
	}
}

void UInventory::RefreshSlot(int slotnum)
{
	if (Player->Inventory[slotnum].Type == EItemTypes::ITEM_NONE)
		Player->Inventory[slotnum].Thumbnail = DefaultTexture;

	Slots[slotnum]->Refresh();
}
