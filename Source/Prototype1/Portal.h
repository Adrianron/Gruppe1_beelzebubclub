// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Portal.generated.h"

UCLASS()
class PROTOTYPE1_API APortal : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APortal();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	int CropCounter = 0;

	UPROPERTY(EditAnywhere)
		USceneComponent* Portal_1;

	UPROPERTY(EditAnywhere)
		USceneComponent* Portal_2;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox;
};
