// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Prototype1GameMode.h"
#include "Pickup_Prototype.h"
#include "Prototype1Character.h"


// Sets default values
APickup_Prototype::APickup_Prototype()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PickupRoot"));
	RootComponent = PickupRoot;

	PickupMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPickup"));
	PickupMesh->SetupAttachment(PickupRoot);

	PickupBox = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("PickupBox"));
	PickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	PickupBox->OnComponentBeginOverlap.AddDynamic(this, &APickup_Prototype::OnPlayerEnterPickupBox);
	PickupBox->SetupAttachment(PickupRoot);

}

// Called when the game starts or when spawned
void APickup_Prototype::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup_Prototype::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void APickup_Prototype::OnPlayerEnterPickupBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA(APrototype1Character::StaticClass()))
	{
		this->Destroy();
	}
}