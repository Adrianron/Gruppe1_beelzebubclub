// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Door_1.h"


// Sets default values
ADoor_1::ADoor_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor_1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor_1::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

