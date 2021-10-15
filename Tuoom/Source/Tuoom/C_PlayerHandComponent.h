// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tuoom.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "C_PlayerHandComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TUOOM_API UC_PlayerHandComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UC_PlayerHandComponent();

	UPROPERTY()
	class AC_Player* player;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LevelState)
	ELevelState levelState;

	bool bHit_L;
	bool bHit_R;
protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);
	void Click();
	void Lobby();
	void CustomRoom();
	void PlayRoom();
};
