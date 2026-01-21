// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "Actor_1.h"
#include "Actor_2.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	World = GetWorld();
	SpawnActors();
}

void ASpawner::SpawnActors()
{	
	if (!World)
	{
		return;
	}
	
	FVector SpawnLocation;
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);

	int32 RValue;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			SpawnLocation = FVector(750 + j * 250, -300 + i * 200, -50.0f);
			RValue = FMath::RandRange(1, 2);
			if (RValue == 1)
			{
				World->SpawnActor<AActor_1>(SpawnLocation, SpawnRotator);
			}
			else
			{
				World->SpawnActor<AActor_2>(SpawnLocation, SpawnRotator);
			}
		}
	}
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

