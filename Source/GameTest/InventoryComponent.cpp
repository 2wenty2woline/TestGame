// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UInventoryComponent::TryToAddItem(const FInventoryData& Data)
{
	if (Data.Score < 0)
	{
		return false;
	}
	
	if (!Inventory.Contains(Data.Type))
	{
		Inventory.Add(Data.Type, 0);
	}

	Inventory[Data.Type] += Data.Score;

	return true;
}

int32 UInventoryComponent::GetInventoryAmountByType(EInventoryItemType Type) const
{
	return Inventory.Contains(Type) ? Inventory[Type] : 0;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

