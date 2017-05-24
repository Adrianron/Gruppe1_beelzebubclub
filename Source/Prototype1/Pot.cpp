// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Pot.h"
#include "crop.h"


// Sets default values
APot::APot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Crop"));
	RootBox->bGenerateOverlapEvents = true;

	Name = "Name not set";
	Action = "Interact";

}

// Called when the game starts or when spawned
void APot::BeginPlay()
{
	Super::BeginPlay();
	
	plant = false;
}

// Called every frame
void APot::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

