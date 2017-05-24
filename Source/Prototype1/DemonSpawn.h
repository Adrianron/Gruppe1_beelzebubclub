// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "DemonSpawn.generated.h"

UCLASS()
class PROTOTYPE1_API ADemonSpawn : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADemonSpawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;


	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class ADemon_Character> DemonClass;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootSphere = nullptr;

	UPROPERTY()
		float SpawnDelayRangeLow = 2.f;

	/** Maximum spawn delay */
	UPROPERTY()
		float SpawnDelayRangeHigh = 4.f;


	/** Whether or not spawning is enabled */
	bool bSpawningEnabled;

	/** Calculates a random spawn delay */
	float GetRandomSpawnDelay();

	/** The current spawn delay */
	float SpawnDelay;

	/** The timer for when to spawn the enemy */
	float SpawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool PlayerReady;


};