// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameTestGameMode.h"
#include "GameTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameTestGameMode::AGameTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
