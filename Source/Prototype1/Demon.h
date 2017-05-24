// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Demon.generated.h"

UCLASS()
class PROTOTYPE1_API ADemon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADemon();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	FVector MoveDirection = FVector(0.f, 1.f, 0.f);

	//AGameModeBase *GameModePointer;

	//int PlaceInArray{0};
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 150.f;

private:


	UPROPERTY(EditAnywhere)
		float TurnDelayMax = 0.5f;
	UPROPERTY(EditAnywhere)
		float TurnDelayMin = 0.2f;

	float CurrentTurnDelay = 0.f;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox = nullptr;

};