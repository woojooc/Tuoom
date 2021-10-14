// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "C_PlayerMoveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TUOOM_API UC_PlayerMoveComponent : public UActorComponent
{
	GENERATED_BODY()
	public:

	UPROPERTY()
	class AC_Player* player;
	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float moveSpeed = 500;
	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float rotateSpeed = 200.f;
	
public:	
	// Sets default values for this component's properties
	UC_PlayerMoveComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
	void MoveHorizontal(float value);
	void MoveVertical(float value);
	void RotateHorizontal(float value);
	void ButtonClick();
	void ButtonRelease();

		
};
