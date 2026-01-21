// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_1.generated.h"

UCLASS()
class TASK6_API AActor_1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	USceneComponent* SceneRoot;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Actor|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	FVector RotationVector;  // 회전 벡터

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	FVector StartLocation; // 시작 좌표

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	float LocationRange; // 이동 범위

	FTimerHandle TimerHandle;

	// 랜덤 벡터 값 생성
	FVector RandomVector();

	// 랜덤 텔레포트
	void MoveRandom();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
