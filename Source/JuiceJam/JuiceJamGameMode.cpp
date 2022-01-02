// Copyright Epic Games, Inc. All Rights Reserved.

#include "JuiceJamGameMode.h"
#include "JuiceJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJuiceJamGameMode::AJuiceJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
