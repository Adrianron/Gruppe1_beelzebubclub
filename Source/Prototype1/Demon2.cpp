// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Demon2.h"


// Sets default values
ADemon2::ADemon2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MyEnemy"));
	RootComponent = RootBox;
	RootBox->bGenerateOverlapEvents = true;
}

// Called when the game starts or when spawned
void ADemon2::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADemon2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	NewLocation += (MoveDirection * Speed * DeltaTime);
	SetActorLocation(NewLocation);
}


