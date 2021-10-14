// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WJ_VJingTable.generated.h"

UCLASS()
class TUOOM_API AWJ_VJingTable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWJ_VJingTable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Root")
	class USceneComponent* rootComp;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> fxPressBtns;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> fxTurnBtns;

	UPROPERTY(EditAnywhere, Category = "Button")
	TArray<class UStaticMeshComponent*> playListBtns;

	UPROPERTY(EditAnywhere, Category = "Body")
	class UStaticMeshComponent* bodyMesh;

	UPROPERTY(EditAnywhere, Category = "PlayList")
	class UStaticMeshComponent* playList;
};
