// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageWidgetActor.generated.h"

UCLASS()
class KJB_PORTFOLIO_API ADamageWidgetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageWidgetActor();
	
	void SetDamageText(FText text);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY()
	UStaticMeshComponent* Root;

	UPROPERTY(VisibleAnywhere, Category = "UI")
	class UWidgetComponent* DamageWidget;

	FVector InitialLocation;
	FVector FinalLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "State", meta = (AllowPrivateAccess = true))
	float DestroyTimer;
	FTimerHandle DestroyTimerHandle = {};
};
