// Copyright Epic Games, Inc. All Rights Reserved.

#include "BGameMode.h"
#include "BCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABGameMode::ABGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
