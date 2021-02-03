// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Item.h"

// Sets default values
AItemActor::AItemActor()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ItemRange = CreateDefaultSubobject<USphereComponent>(TEXT("ItemRange"));
	RootComponent = Mesh;
	ItemRange->SetupAttachment(RootComponent);
	ItemRange->SetSphereRadius(50.0f);
}

void AItemActor::SetItem(TSubclassOf<class UItem> item)
{
	Item = item;
}

// Called when the game starts or when spawned
void AItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}


