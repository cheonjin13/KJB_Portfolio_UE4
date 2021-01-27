// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "PlayerWidget.h"
#include "MyCharacterDataComponent.h"
#include "MyPlayerState.h"
#include "Monster.h"

AMyPlayerController::AMyPlayerController()
{
	//WidgetBlueprint'/Game/MyContents/UI/UI_PlayerBagic.UI_PlayerBagic'
	static ConstructorHelpers::FClassFinder<UPlayerWidget> UI_HUD_C(TEXT("/Game/MyContents/UI/UI_PlayerBagic.UI_PlayerBagic_C"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}
}

UPlayerWidget * AMyPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

void AMyPlayerController::NPCKill(AMonster * KilledNPC) const
{
	MyPlayerState->AddExp(KilledNPC->GetExp());
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	HUDWidget = CreateWidget<UPlayerWidget>(this, HUDWidgetClass);
	HUDWidget->AddToViewport();
	
	MyPlayerState = Cast<AMyPlayerState>(PlayerState);
	if (MyPlayerState != nullptr)
	{
		HUDWidget->BindPlayerState(MyPlayerState);
		MyPlayerState->OnPlayerStateChanged.Broadcast();
	}


}