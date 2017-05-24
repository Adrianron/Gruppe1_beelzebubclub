// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Portal.h"
#include "Crop.h"


// Sets default values
APortal::APortal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Portal"));
	RootComponent = RootBox;
	RootBox->bGenerateOverlapEvents = true;


	Portal_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portal Closed"));
	Portal_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portal Open"));
	Portal_1->SetupAttachment(RootComponent);
	Portal_2->SetupAttachment(RootComponent);
	Cast<UShapeComponent>(RootComponent)->bGenerateOverlapEvents = true;


}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();

	Portal_2->ToggleVisibility();

}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}