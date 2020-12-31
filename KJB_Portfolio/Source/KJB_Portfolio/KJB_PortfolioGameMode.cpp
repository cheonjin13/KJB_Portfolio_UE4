// Copyright Epic Games, Inc. All Rights Reserved.

#include "KJB_PortfolioGameMode.h"
#include "KJB_PortfolioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKJB_PortfolioGameMode::AKJB_PortfolioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
