// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_Steam_LearnGameMode.h"
#include "MP_Steam_LearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_Steam_LearnGameMode::AMP_Steam_LearnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
