// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pit.generated.h"

UCLASS()
class PROTOTYPE1_API APit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APit();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox;

	
};
