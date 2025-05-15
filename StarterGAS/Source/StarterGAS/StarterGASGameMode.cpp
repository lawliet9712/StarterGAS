// Copyright Epic Games, Inc. All Rights Reserved.

#include "StarterGASGameMode.h"
#include "StarterGASCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStarterGASGameMode::AStarterGASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
