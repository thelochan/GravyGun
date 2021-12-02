// Copyright Epic Games, Inc. All Rights Reserved.

#include "gravyGameMode.h"
#include "gravyHUD.h"
#include "gravyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgravyGameMode::AgravyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AgravyHUD::StaticClass();
}
