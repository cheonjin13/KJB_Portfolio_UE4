// Fill out your copyright notice in the Description page of Project Settings.


#include "UsableItem.h"
#include "InventoryComponent.h"
#include "MyCharacter.h"
#include "MyCharacterDataComponent.h"

void UUsableItem::Use(AMyCharacter * Character)
{
	if (Character)
	{
		Character->CharacterStat->SetHPUsePotion(HPPotionPoint);
		if (OwningInventory)
		{
			Count--;
			if (Count < 1)
			{
				OwningInventory->RemoveItem(this);
			}
		}
	}
	
}
