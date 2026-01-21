// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_1.h"

// Sets default values
AActor_1::AActor_1()
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

	RotationVector = FVector(0.0f, 10.0f, 0.0f);
	StartLocation = FVector(0.0f, 0.0f, 0.0f);
	LocationRange = 100.0f;
}

// Called when the game starts or when spawned
void AActor_1::BeginPlay()
{
	Super::BeginPlay();
	//SetActorLocation(StartLocation);
	StartLocation = GetActorLocation();
	StaticMeshComp->SetRelativeLocation(FVector(0.0f, 0.0f, -50.0f));  // 매쉬와 액터의 중심 맞추기
	RotationVector = RandomVector();  // 회전할 벡터 값을 랜덤으로 생성

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AActor_1::MoveRandom, 3.0f, true);  // 3초 주기로 랜덤 위치로 이동
}

FVector AActor_1::RandomVector()
{
	float RValueX = 0.0f;
	float RValueY = 0.0f;
	float RValueZ = 0.0f;
	int32 RAxis = FMath::RandRange(1, 3);

	if(RAxis == 1) RValueX = FMath::RandRange(-50, 50);
	else if(RAxis == 2) RValueY = FMath::RandRange(-50, 50);
	else RValueZ = FMath::RandRange(-50, 50);

	return FVector(RValueX, RValueY, RValueZ);
}

void AActor_1::MoveRandom()
{
	float RValueX, RValueY;

	RValueX = FMath::RandRange(-LocationRange, LocationRange);
	RValueY = FMath::RandRange(-LocationRange, LocationRange);

	SetActorLocation(StartLocation + FVector(RValueX, RValueY, 0.0f));
}

// Called every frame
void AActor_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RotationVector.X) || !FMath::IsNearlyZero(RotationVector.Y) || !FMath::IsNearlyZero(RotationVector.Z))
	{
		AddActorLocalRotation(FRotator(RotationVector.X * DeltaTime, RotationVector.Y * DeltaTime, RotationVector.Z * DeltaTime));
	}
}

