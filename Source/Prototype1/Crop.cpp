// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Crop.h"
#include "Pickup_Prototype.h"


ACrop::ACrop()
{
	PrimaryActorTick.bCanEverTick = true;
	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Crop"));
	RootBox->bGenerateOverlapEvents = true;


	Plant_Stage_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant Stage 1"));
	Plant_Stage_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant Stage 2"));
	Plant_Stage_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant Stage 3"));
	Plant_Stage_1->SetupAttachment(RootBox);
	Plant_Stage_2->SetupAttachment(RootBox);
	Plant_Stage_3->SetupAttachment(RootBox);
	Plant_Stage_2->ToggleVisibility();
	Plant_Stage_3->ToggleVisibility();
}

void ACrop::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CropTimer += DeltaTime;

	bool ChangeShape = (CropTimer > CropTime);

	if (ChangeShape)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			CropTimer -= CropTime;
			CropCounter++;

			if (CropCounter == 1)
			{
				Plant_Stage_2->ToggleVisibility();
				Plant_Stage_1->ToggleVisibility();
			}
			else if (CropCounter == 2)
			{
				Plant_Stage_2->ToggleVisibility();
				Plant_Stage_3->ToggleVisibility();
			}
			else if (CropCounter == 3)
			{
				Dying = true;
			}
		}
	}
}
