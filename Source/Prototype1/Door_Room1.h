// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Door_Room1.generated.h"

UCLASS()
class PROTOTYPE1_API ADoor_Room1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor_Room1();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;


	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class ADoor_1> DoorClass;


	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox;

	UFUNCTION()
		void OnOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
};