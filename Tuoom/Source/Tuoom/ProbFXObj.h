// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tuoom.h"
#include "GameFramework/Actor.h"
#include "ProbFXObj.generated.h"

UCLASS()
class TUOOM_API AProbFXObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProbFXObj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
