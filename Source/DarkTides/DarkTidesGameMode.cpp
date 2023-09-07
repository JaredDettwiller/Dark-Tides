// Copyright Epic Games, Inc. All Rights Reserved.

#include "DarkTidesGameMode.h"
#include "DarkTidesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADarkTidesGameMode::ADarkTidesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
