// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Prototype1.h"
#include "Prototype1GameMode.h"
#include "Prototype1PlayerController.h"
#include "Prototype1Character.h"

APrototype1GameMode::APrototype1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APrototype1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	
}