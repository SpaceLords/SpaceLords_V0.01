// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceLordsGameMode.h"
#include "SpaceLordsPawn.h"

ASpaceLordsGameMode::ASpaceLordsGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASpaceLordsPawn::StaticClass();
}

