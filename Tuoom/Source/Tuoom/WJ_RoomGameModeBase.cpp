// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_RoomGameModeBase.h"

AWJ_RoomGameModeBase::AWJ_RoomGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;



}

void AWJ_RoomGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetRoomState(EPlayRoomState::Enter);
}

void AWJ_RoomGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	switch (roomState)
	{
	case EPlayRoomState::Enter:
	Enter();
		break;
	case EPlayRoomState::Set:
	Set();
		break;
	case EPlayRoomState::Open:
	Open();
		break;
	case EPlayRoomState::Playing:
	Playing();
		break;
	case EPlayRoomState::End:
	End();
		break;
	default:
		break;
	}
}


void AWJ_RoomGameModeBase::Enter()
{
	SetRoomState(EPlayRoomState::Set);
	//SetRoomState(EPlayRoomState::Playing);

}

void AWJ_RoomGameModeBase::Set()
{

}

void AWJ_RoomGameModeBase::Open()
{

}

void AWJ_RoomGameModeBase::Playing()
{

}

void AWJ_RoomGameModeBase::End()
{

}


// # GET SET

EPlayRoomState AWJ_RoomGameModeBase::GetRoomState()
{
	return roomState;
}

void AWJ_RoomGameModeBase::SetRoomState(EPlayRoomState state)
{
	roomState = state;
}