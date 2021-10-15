// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "C_Player.generated.h"

UCLASS()
class TUOOM_API AC_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_Player();

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USceneComponent* cameraRoot;
	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UCameraComponent* playerCam;
	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* leftController;
	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* rightController;
	UPROPERTY(EditAnywhere, Category = WidgetPointer)
	class UWidgetInteractionComponent* widgetPointer_L;
	UPROPERTY(EditAnywhere, Category = WidgetPointer)
	class UWidgetInteractionComponent* widgetPointer_R;
	UPROPERTY(VisibleAnywhere, Category = AnimComponent)
	class UC_PlayerAnimInstance* anim;
	UPROPERTY(VisibleAnywhere, Category = MoveComponent)
	class UC_PlayerMoveComponent* moveComp;
	UPROPERTY(VisibleAnywhere, Category = HandComponent)
	class UC_PlayerHandComponent* handComp;
	

	FRotator hmdRotate;
	FVector hmdLocation;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void ResetHMD();
};
