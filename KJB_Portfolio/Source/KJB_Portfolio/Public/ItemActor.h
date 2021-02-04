// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

UCLASS()
class KJB_PORTFOLIO_API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActor();

	void SetItem(TSubclassOf<class UItem> item);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class UItem> Item;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
	class UStaticMeshComponent* Mesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USphereComponent* Trigger;
	UPROPERTY(VisibleAnywhere, Category = "UI")
	class UWidgetComponent* ItemNameWidget;

private:
	void OnCharacterOverlap(UPrimitiveComponent* OverlappedCom, AActor* OtherActor,
		UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

};
