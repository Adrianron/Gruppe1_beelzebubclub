// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Pickup.h"

APickup::APickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshPickup");
}


