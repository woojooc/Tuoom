// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ELevelState : uint8
{
	Lobby,
	CustomRoom,
	PlayRoom
};

UENUM(BlueprintType)
enum class EPlayRoomState : uint8 
{
	Enter,
	Ready,
	Playing,
	End
};

UENUM(BlueprintType)
enum class EProbObjType : uint8
{
	Sofa,
	Lignt,
	Table,
	Carpet,
	Plants,
	Etc
};