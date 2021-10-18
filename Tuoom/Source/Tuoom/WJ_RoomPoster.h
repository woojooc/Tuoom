// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WJ_RoomPoster.generated.h"

UCLASS()
class TUOOM_API AWJ_RoomPoster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWJ_RoomPoster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	UPROPERTY(EditAnywhere, Category = Root)
	class UBoxComponent* boxComp;
	UPROPERTY(EditAnywhere, Category = Mesh)
	class UStaticMeshComponent* meshComp;

	// �������� ������ �̹����� ������ ���� -> �Ķ���� ����
	void SetPoster();

	void EnterRoom(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
};
