// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInterface.h"
#include "Inventory.h"
#include "MyCharacter.h"

void UGameInterface::Init()
{
	if (Inventory)
	{
		Inventory->Player = this->Player;
		Inventory->Init();
	}
}

void UGameInterface::SetPlayer(AMyCharacter * player)
{
	this->Player = player;
}

void UGameInterface::RefreshInventory(int slotnum)
{
	Inventory->RefreshSlot(slotnum);
}
