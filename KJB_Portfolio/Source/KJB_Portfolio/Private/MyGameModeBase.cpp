// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "RpgHUD.h"
#include "MyPlayerState.h"

AMyGameModeBase::AMyGameModeBase()
{
	//Blueprint'/Game/MyContents/Character/BP_PlayerBase.BP_PlayerBase'
	static ConstructorHelpers::FClassFinder<AMyCharacter> PLAYER(TEXT("/Game/MyContents/Character/BP_PlayerBase.BP_PlayerBase_C"));
	if (PLAYER.Succeeded())
	{
		DefaultPawnClass = PLAYER.Class;
	}
	PlayerControllerClass = AMyPlayerController::StaticClass();
	HUDClass = ARpgHUD::StaticClass();
	PlayerStateClass = AMyPlayerState::StaticClass();
}

void AMyGameModeBase::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);

	auto myPlayerState = Cast<AMyPlayerState>(NewPlayer->PlayerState);
	if (myPlayerState != nullptr)
	{
		myPlayerState->InitPlayerData();
	}
}
