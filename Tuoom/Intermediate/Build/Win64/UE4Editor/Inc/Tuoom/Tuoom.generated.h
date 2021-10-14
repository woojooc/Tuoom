// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUOOM_Tuoom_generated_h
#error "Tuoom.generated.h already included, missing '#pragma once' in Tuoom.h"
#endif
#define TUOOM_Tuoom_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tuoom_Source_Tuoom_Tuoom_h


#define FOREACH_ENUM_EPROBOBJTYPE(op) \
	op(EProbObjType::Sofa) \
	op(EProbObjType::Lignt) \
	op(EProbObjType::Table) \
	op(EProbObjType::Carpet) \
	op(EProbObjType::Plants) \
	op(EProbObjType::Etc) 

enum class EProbObjType : uint8;
template<> TUOOM_API UEnum* StaticEnum<EProbObjType>();

#define FOREACH_ENUM_EPLAYROOMSTATE(op) \
	op(EPlayRoomState::Enter) \
	op(EPlayRoomState::Ready) \
	op(EPlayRoomState::Playing) \
	op(EPlayRoomState::End) 

enum class EPlayRoomState : uint8;
template<> TUOOM_API UEnum* StaticEnum<EPlayRoomState>();

#define FOREACH_ENUM_ELEVELSTATE(op) \
	op(ELevelState::Lobby) \
	op(ELevelState::CustomRoom) \
	op(ELevelState::PlayRoom) 

enum class ELevelState : uint8;
template<> TUOOM_API UEnum* StaticEnum<ELevelState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
