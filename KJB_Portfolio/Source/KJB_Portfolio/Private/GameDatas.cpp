// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDatas.h"
#include "MyCharacter.h"
#include "MyCharacterDataComponent.h"
#include "GameInterface.h"
#include "Inventory.h"

void FItemData::Clear()
{
	Name = TEXT("");
	Count = 0;
	Thumbnail = nullptr;
	Type = EItemTypes::ITEM_NONE;
}

void FItemData::Use(AMyCharacter* player)
{
	switch (Type)
	{
		case EItemTypes::ITEM_USEABLE:
		{
			player->CharacterStat->SetHPUsePotion(20.0f);
			Count--;
			if (Count <= 0)
			{
				this->Clear();
				//Thumbnail = player->GameUIWidget->Inventory->DefaultTexture;
			}
			break;
		}
	case EItemTypes::ITEM_Equipment:
		break;
	}
}