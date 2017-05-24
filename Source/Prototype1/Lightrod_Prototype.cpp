// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Lightrod_Prototype.h"


ALightrod_Prototype::ALightrod_Prototype()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSphere = CreateDefaultSubobject<USphereComponent>(TEXT("MySphere"));
	RootComponent = RootSphere;
	RootSphere->bGenerateOverlapEvents = true;
	Cast<UShapeComponent>(RootComponent)->bGenerateOverlapEvents = true;

}

// Called when the game starts or when spawned
void ALightrod_Prototype::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALightrod_Prototype::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


