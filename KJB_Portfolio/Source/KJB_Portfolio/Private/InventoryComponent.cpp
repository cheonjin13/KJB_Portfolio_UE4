// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Item.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Capacity = 20;
}


bool UInventoryComponent::AddItem(UItem * Item)
{
	if (Items.Num() >= Capacity || !Item)
	{
		return false;
	}


	Item->OwningInventory = this;
	Item->World = GetWorld();
	Items.Add(Item);
	

	//Update UI
	OnInventoryUpdated.Broadcast();

	return true;
}

bool UInventoryComponent::RemoveItem(UItem * Item)
{
	if (Item)
	{
		Item->OwningInventory = nullptr;
		Item->World = nullptr;
		Items.RemoveSingle(Item);
		
		//Update UI
		OnInventoryUpdated.Broadcast();
		return true;
	}

	return false;
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	for (auto& Item : DefaultItems)
	{
		AddItem(Item);
	}
}



/*
	int32 sum = Target->Count + val->Count;
	if (sum > Target->MaxCount)
	{
		int32 num = sum / Target->MaxCount;
		while (num > 0)
		{
			if (num == 1)
			{
				val->Count = sum % Target->MaxCount;
				Items.Add(val);
				break;
			}
			val->Count = Target->MaxCount;
			Items.Add(val);
			num--;			
		}

		Target->Count = Target->MaxCount;

		OnInventoryUpdated.Broadcast();

	}

	Target->Count = sum;

	OnInventoryUpdated.Broadcast();
	*/