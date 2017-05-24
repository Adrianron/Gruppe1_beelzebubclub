// Fill out your copyright notice in the Description page of Project Settings.

#include "Prototype1.h"
#include "Door_Room1.h"
#include "Prototype1Character.h"
#include "Door_1.h"

// Sets default values
ADoor_Room1::ADoor_Room1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Crop"));
	RootBox->bGenerateOverlapEvents = true;

	RootBox->OnComponentBeginOverlap.AddDynamic(this, &ADoor_Room1::OnOverlap);

}

// Called when the game starts or when spawned
void ADoor_Room1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADoor_Room1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor_Room1::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	//Check if you overlap with an emeny, then to destroy both of you

	UE_LOG(LogTemp, Warning, TEXT("Bullet Overlap %s"), *OtherActor->GetName())

		if (OtherActor->IsA(APrototype1Character::StaticClass()))    //Klassen til enemy er AEnemy
		{
			UWorld* World = GetWorld();
			FVector Location = GetActorLocation(); 
			FRotator Rotation = GetActorRotation();
			Location.X += 100.f;
			Location.Y -= 30.f;
			Location.Z -= 50.f;
			Rotation.Yaw -= 13.f;


			World->SpawnActor<ADoor_1>(DoorClass, Location, FRotator::ZeroRotator);
			this->Destroy();
		}
}