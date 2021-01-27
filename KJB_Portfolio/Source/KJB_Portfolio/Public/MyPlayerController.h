// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../KJB_Portfolio.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class KJB_PORTFOLIO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();

	class UPlayerWidget* GetHUDWidget() const;
	void NPCKill(class AMonster* KilledNPC) const;
protected:
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UPlayerWidget> HUDWidgetClass;

private:
	UPROPERTY()
	class UPlayerWidget* HUDWidget; 

	UPROPERTY()
	class AMyPlayerState* MyPlayerState;
};
