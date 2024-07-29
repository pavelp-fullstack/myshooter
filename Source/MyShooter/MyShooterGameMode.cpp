// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyShooterGameMode.h"
#include "MyShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyShooterGameMode::AMyShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
