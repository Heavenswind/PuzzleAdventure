// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleAdventureGameMode.h"
#include "PuzzleAdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleAdventureGameMode::APuzzleAdventureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
