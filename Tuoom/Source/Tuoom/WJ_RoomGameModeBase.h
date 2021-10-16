// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tuoom.h"
#include "GameFramework/GameModeBase.h"
#include "WJ_RoomGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TUOOM_API AWJ_RoomGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AWJ_RoomGameModeBase();

	virtual void BeginPlay() override;
	virtual void Tick( float DeltaSeconds ) override;


	EPlayRoomState GetRoomState();
	void SetRoomState(EPlayRoomState state);

private:
	EPlayRoomState roomState;

	void Enter();
	void Set();
	void Open();
	void Playing();
	void End();

};
