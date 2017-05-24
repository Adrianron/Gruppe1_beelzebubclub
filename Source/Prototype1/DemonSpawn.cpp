// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "DemonSpawn.h"
#include "Demon_Character.h"


// Sets default values
ADemonSpawn::ADemonSpawn()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSphere = CreateDefaultSubobject<USphereComponent>(TEXT("MySphere"));
	RootComponent = RootSphere;


	SpawnDelayRangeLow;
	SpawnDelayRangeHigh;
	SpawnDelay = GetRandomSpawnDelay();
}

// Called when the game starts or when spawned
void ADemonSpawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerReady = false;
}

float ADemonSpawn::GetRandomSpawnDelay()
{
	// Get a random float that falls within the spawn delay range
	return FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
}

// Called every frame
void ADemonSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpawnTime += DeltaTime;

	bool bShouldSpawn = (SpawnTime > SpawnDelay);
	
		if (bShouldSpawn)
		{
			SpawnTime -= SpawnDelay;

			SpawnDelay = GetRandomSpawnDelay();
				
				if (PlayerReady == true)
				{
					UWorld* World = GetWorld();

					FVector Location = GetActorLocation();
					World->SpawnActor<ADemon_Character>(DemonClass, Location, FRotator::ZeroRotator);
				}
		}
	
}

