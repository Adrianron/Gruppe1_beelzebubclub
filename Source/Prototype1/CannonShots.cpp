// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "CannonShots.h"


// Sets default values
ACannonShots::ACannonShots()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSphere = CreateDefaultSubobject<UBoxComponent>(TEXT("CannonCrop"));
	RootSphere->bGenerateOverlapEvents = true;

}

// Called when the game starts or when spawned
void ACannonShots::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACannonShots::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

