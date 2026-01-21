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

	MoveVector = FVector(0.0f, 20.0f, 0.0f);
	MaxRange = 100.0f;
	StartLocation = FVector(100.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void AActor_2::BeginPlay()
{
	Super::BeginPlay();
	//SetActorLocation(StartLocation);
	StartLocation = GetActorLocation();
	MoveVector = RandomVector();  // 이동할 벡터 랜덤 생성
}

FVector AActor_2::RandomVector()
{
	float RValueX, RValueY;

	RValueX = FMath::RandRange(-30, 30);
	RValueY = FMath::RandRange(-30, 30);

	return FVector(RValueX, RValueY, 0.0f);
}

// Called every frame
void AActor_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(MoveVector.X) || !FMath::IsNearlyZero(MoveVector.Y) || !FMath::IsNearlyZero(MoveVector.Z))
	{
		if (FVector::Dist(StartLocation, GetActorLocation()) >= MaxRange)  // 시작 좌표에서 일정 거리 벗어나면
		{
			MoveVector = -MoveVector;  // 이동 벡터를 반대로 전환
		}
		AddActorLocalOffset(MoveVector*DeltaTime);
	}
}

