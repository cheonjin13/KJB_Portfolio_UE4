// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

UItem::UItem()
{
	Type = EItemType::ITEM_NONE;
	Count = 0;
	Weight = 1.0f;
	ItemDisplayName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}