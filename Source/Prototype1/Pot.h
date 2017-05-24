// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pot.generated.h"


UCLASS()
class PROTOTYPE1_API APot : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APot();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere)
		UShapeComponent* RootBox;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool plant;

	UFUNCTION(BlueprintImplementableEvent)
		void Interact(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
		FString Name;

	UPROPERTY(EditDefaultsOnly)
		FString Action;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
		FString GetUseText() const { return FString::Printf(TEXT("%s : Right click to %s"), *Name, *Action); }
	
};
