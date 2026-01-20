// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_2.h"

// Sets default values
AActor_2::AActor_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	MoveSpeed = 20.0f;
	MaxRange = 100.0f;
	StartLocation = FVector(100.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void AActor_2::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(StartLocation);
}

// Called every frame
void AActor_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(MoveSpeed))
	{
		if (FVector::Dist(StartLocation, GetActorLocation()) >= MaxRange)
		{
			MoveSpeed = -MoveSpeed;
		}
		AddActorLocalOffset(FVector(0.0f, MoveSpeed * DeltaTime, 0.0f));
	}
}

