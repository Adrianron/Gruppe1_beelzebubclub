// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameModeBase.h"
#include "Prototype1GameMode.generated.h"

UCLASS(minimalapi)
class APrototype1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrototype1GameMode();

UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int CropBag;

UPROPERTY(BlueprintReadWrite)
	int PitCount;

UPROPERTY(BlueprintReadWrite)
	int PitReq = 15;

UPROPERTY(BlueprintReadWrite)
	bool PitFull = false;


};



