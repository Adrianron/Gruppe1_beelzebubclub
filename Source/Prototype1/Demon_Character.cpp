// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Demon_Character.h"


// Sets default values
ADemon_Character::ADemon_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADemon_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADemon_Character::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ADemon_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

