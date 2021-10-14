// Fill out your copyright notice in the Description page of Project Settings.


#include "WJ_TuoomGameInstance.h"

int UWJ_TuoomGameInstance::GetAvatarID()
{
	return avatarIdx;
}

ELevelState UWJ_TuoomGameInstance::GetLevelState()
{
	return levelState;
}

void UWJ_TuoomGameInstance::SetAvatarID(int id)
{
	avatarIdx = id;
}

void UWJ_TuoomGameInstance::SetLevelState(ELevelState state)
{
	levelState = state;
}