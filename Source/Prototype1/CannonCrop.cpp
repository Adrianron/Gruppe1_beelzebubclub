// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "CannonCrop.h"


// Sets default values
ACannonCrop::ACannonCrop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CannonCrop"));
	RootBox->bGenerateOverlapEvents = true;

}

// Called when the game starts or when spawned
void ACannonCrop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACannonCrop::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

