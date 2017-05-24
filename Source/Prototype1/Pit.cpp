// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Pit.h"


// Sets default values
APit::APit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyEnemy"));
	RootComponent = RootBox;
	RootBox->bGenerateOverlapEvents = true;
}

// Called when the game starts or when spawned
void APit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APit::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

