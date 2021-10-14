// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/Tuoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTuoom() {}
// Cross Module References
	TUOOM_API UEnum* Z_Construct_UEnum_Tuoom_EProbObjType();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
	TUOOM_API UEnum* Z_Construct_UEnum_Tuoom_EPlayRoomState();
	TUOOM_API UEnum* Z_Construct_UEnum_Tuoom_ELevelState();
// End Cross Module References
	static UEnum* EProbObjType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tuoom_EProbObjType, Z_Construct_UPackage__Script_Tuoom(), TEXT("EProbObjType"));
		}
		return Singleton;
	}
	template<> TUOOM_API UEnum* StaticEnum<EProbObjType>()
	{
		return EProbObjType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProbObjType(EProbObjType_StaticEnum, TEXT("/Script/Tuoom"), TEXT("EProbObjType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tuoom_EProbObjType_Hash() { return 2619040097U; }
	UEnum* Z_Construct_UEnum_Tuoom_EProbObjType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tuoom();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProbObjType"), 0, Get_Z_Construct_UEnum_Tuoom_EProbObjType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProbObjType::Sofa", (int64)EProbObjType::Sofa },
				{ "EProbObjType::Lignt", (int64)EProbObjType::Lignt },
				{ "EProbObjType::Table", (int64)EProbObjType::Table },
				{ "EProbObjType::Carpet", (int64)EProbObjType::Carpet },
				{ "EProbObjType::Plants", (int64)EProbObjType::Plants },
				{ "EProbObjType::Etc", (int64)EProbObjType::Etc },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Carpet.Name", "EProbObjType::Carpet" },
				{ "Etc.Name", "EProbObjType::Etc" },
				{ "Lignt.Name", "EProbObjType::Lignt" },
				{ "ModuleRelativePath", "Tuoom.h" },
				{ "Plants.Name", "EProbObjType::Plants" },
				{ "Sofa.Name", "EProbObjType::Sofa" },
				{ "Table.Name", "EProbObjType::Table" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tuoom,
				nullptr,
				"EProbObjType",
				"EProbObjType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlayRoomState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tuoom_EPlayRoomState, Z_Construct_UPackage__Script_Tuoom(), TEXT("EPlayRoomState"));
		}
		return Singleton;
	}
	template<> TUOOM_API UEnum* StaticEnum<EPlayRoomState>()
	{
		return EPlayRoomState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayRoomState(EPlayRoomState_StaticEnum, TEXT("/Script/Tuoom"), TEXT("EPlayRoomState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tuoom_EPlayRoomState_Hash() { return 235995286U; }
	UEnum* Z_Construct_UEnum_Tuoom_EPlayRoomState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tuoom();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayRoomState"), 0, Get_Z_Construct_UEnum_Tuoom_EPlayRoomState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayRoomState::Enter", (int64)EPlayRoomState::Enter },
				{ "EPlayRoomState::Ready", (int64)EPlayRoomState::Ready },
				{ "EPlayRoomState::Playing", (int64)EPlayRoomState::Playing },
				{ "EPlayRoomState::End", (int64)EPlayRoomState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "End.Name", "EPlayRoomState::End" },
				{ "Enter.Name", "EPlayRoomState::Enter" },
				{ "ModuleRelativePath", "Tuoom.h" },
				{ "Playing.Name", "EPlayRoomState::Playing" },
				{ "Ready.Name", "EPlayRoomState::Ready" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tuoom,
				nullptr,
				"EPlayRoomState",
				"EPlayRoomState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELevelState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tuoom_ELevelState, Z_Construct_UPackage__Script_Tuoom(), TEXT("ELevelState"));
		}
		return Singleton;
	}
	template<> TUOOM_API UEnum* StaticEnum<ELevelState>()
	{
		return ELevelState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelState(ELevelState_StaticEnum, TEXT("/Script/Tuoom"), TEXT("ELevelState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tuoom_ELevelState_Hash() { return 3742095160U; }
	UEnum* Z_Construct_UEnum_Tuoom_ELevelState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tuoom();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelState"), 0, Get_Z_Construct_UEnum_Tuoom_ELevelState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelState::Lobby", (int64)ELevelState::Lobby },
				{ "ELevelState::CustomRoom", (int64)ELevelState::CustomRoom },
				{ "ELevelState::PlayRoom", (int64)ELevelState::PlayRoom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomRoom.Name", "ELevelState::CustomRoom" },
				{ "Lobby.Name", "ELevelState::Lobby" },
				{ "ModuleRelativePath", "Tuoom.h" },
				{ "PlayRoom.Name", "ELevelState::PlayRoom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tuoom,
				nullptr,
				"ELevelState",
				"ELevelState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
