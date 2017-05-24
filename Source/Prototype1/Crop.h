// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Crop.generated.h"

UCLASS()
class PROTOTYPE1_API ACrop : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ACrop();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox;

	UPROPERTY(EditAnywhere)
		USceneComponent* Plant_Stage_1;

	UPROPERTY(EditAnywhere)
		USceneComponent* Plant_Stage_2;

	UPROPERTY(EditAnywhere)
		USceneComponent* Plant_Stage_3;

	
	UPROPERTY(EditAnywhere, Category = CropDrop, BlueprintReadWrite)
		TSubclassOf<class APickup_Prototype> PickupClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Dying = false;


	float CropTime = 15;
	float CropTimer;
	int CropCounter = 0;

};
