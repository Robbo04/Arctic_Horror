// Copyright Epic Games, Inc. All Rights Reserved.

#include "Arctic_HorrorGameMode.h"
#include "Arctic_HorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArctic_HorrorGameMode::AArctic_HorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
