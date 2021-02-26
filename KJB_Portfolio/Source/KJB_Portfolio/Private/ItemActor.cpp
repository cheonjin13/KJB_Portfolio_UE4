// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Item.h"
#include "ItemWidget.h"
#include "MyCharacter.h"

// Sets default values
AItemActor::AItemActor()
{
	Tags.Add("Item");
	Trigger = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	
	RootComponent = Trigger;
	Mesh->SetupAttachment(RootComponent);

	Trigger->SetSphereRadius(150.0f);
	Trigger->SetCollisionProfileName(TEXT("Item"));
	Mesh->SetCollisionProfileName(TEXT("NoCollision"));

	ItemWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("ItemNameWidget"));
	ItemWidgetComp->SetupAttachment(Mesh);
	ItemWidgetComp->SetWidgetSpace(EWidgetSpace::Screen);


}

void AItemActor::SetItem(class UItem* item)
{
	if (item == nullptr) return;
	Item = item;
	
	if (Item->PickupMesh)
	{
		Mesh->SetStaticMesh(Item->PickupMesh);
	}

	auto widget = Cast<UItemWidget>(ItemWidgetComp->GetUserWidgetObject());
	if (widget != nullptr)
	{		
		widget->SetItemText(Item->ItemDisplayName);
	}

}

void AItemActor::OnCharacterOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	auto myCharacter = Cast<AMyCharacter>(OtherActor);
	if (myCharacter != nullptr)
	{
		ALOG(Warning, TEXT("Overlaped Character"));
		auto widget = Cast<UItemWidget>(ItemWidgetComp->GetUserWidgetObject());
		if (widget)
		{
			widget->SetVisibility(ESlateVisibility::Visible);
			if (Item != nullptr)
			{
				widget->SetItemText(Item->ItemDisplayName);
			}
		}
	}
}

void AItemActor::OnCharacterOverlapEnd(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * otherComp, int32 OtherBodyIndex)
{
	auto myCharacter = Cast<AMyCharacter>(OtherActor);
	if (myCharacter != nullptr)
	{
		ALOG(Warning, TEXT("Overlaped End Character"));
		auto widget = Cast<UItemWidget>(ItemWidgetComp->GetUserWidgetObject());
		if (widget)
		{
			widget->SetVisibility(ESlateVisibility::Hidden);
		}
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
	Trigger->OnComponentEndOverlap.AddDynamic(this, &AItemActor::OnCharacterOverlapEnd);
}


