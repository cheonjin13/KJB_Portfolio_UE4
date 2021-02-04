// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Item.h"
#include "MyCharacter.h"

// Sets default values
AItemActor::AItemActor()
{
	Tags.Add("Item");
	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ItemNameWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("ItemNameWidget"));
	

	RootComponent = Trigger;
	Mesh->SetupAttachment(RootComponent);
	Trigger->SetSphereRadius(50.0f);
	Trigger->SetCollisionProfileName(TEXT("Item"));
	Mesh->SetCollisionProfileName(TEXT("NoCollision"));

}

void AItemActor::SetItem(TSubclassOf<class UItem> item)
{
	Item = item;

	if (Item.GetDefaultObject()->PickupMesh)
	{
		Mesh->SetStaticMesh(Item.GetDefaultObject()->PickupMesh);
	}
}

void AItemActor::OnCharacterOverlap(UPrimitiveComponent * OverlappedCom, AActor * OtherActor, UPrimitiveComponent * otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	auto myCharacter = Cast<AMyCharacter>(OtherActor);
	if (myCharacter != nullptr)
	{
		
	}
	else
	{

	}
}

// Called when the game starts or when spawned
void AItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Trigger->OnComponentBeginOverlap.AddDynamic(this, &AItemActor::OnCharacterOverlap);
}


