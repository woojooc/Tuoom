// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "C_PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TUOOM_API UC_PlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	public:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FVector leftHandLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FRotator leftHandRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FVector rightHandLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FRotator rightHandRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FVector headLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = IK_Settings)
	FRotator headRotation;
};
