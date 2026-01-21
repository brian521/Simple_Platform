// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_2.generated.h"

UCLASS()
class TASK6_API AActor_2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	USceneComponent* SceneRoot;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Actor|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	FVector MoveVector; // 움직일 벡터 값

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	float MaxRange;  // 이동 제한 거리

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor|Properties")
	FVector StartLocation;

	// 랜덤 벡터 생성
	FVector RandomVector();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
