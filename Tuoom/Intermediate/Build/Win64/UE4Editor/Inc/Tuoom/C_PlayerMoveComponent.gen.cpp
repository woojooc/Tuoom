// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/C_PlayerMoveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_PlayerMoveComponent() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerMoveComponent_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerMoveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
	TUOOM_API UClass* Z_Construct_UClass_AC_Player_NoRegister();
// End Cross Module References
	void UC_PlayerMoveComponent::StaticRegisterNativesUC_PlayerMoveComponent()
	{
	}
	UClass* Z_Construct_UClass_UC_PlayerMoveComponent_NoRegister()
	{
		return UC_PlayerMoveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UC_PlayerMoveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_PlayerMoveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerMoveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_PlayerMoveComponent.h" },
		{ "ModuleRelativePath", "C_PlayerMoveComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "C_PlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerMoveComponent, player), Z_Construct_UClass_AC_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "C_PlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerMoveComponent, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_rotateSpeed_MetaData[] = {
		{ "Category", "MoveSettings" },
		{ "ModuleRelativePath", "C_PlayerMoveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerMoveComponent, rotateSpeed), METADATA_PARAMS(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_rotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_rotateSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_PlayerMoveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerMoveComponent_Statics::NewProp_rotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_PlayerMoveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_PlayerMoveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_PlayerMoveComponent_Statics::ClassParams = {
		&UC_PlayerMoveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UC_PlayerMoveComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerMoveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_PlayerMoveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_PlayerMoveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_PlayerMoveComponent, 3525206007);
	template<> TUOOM_API UClass* StaticClass<UC_PlayerMoveComponent>()
	{
		return UC_PlayerMoveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_PlayerMoveComponent(Z_Construct_UClass_UC_PlayerMoveComponent, &UC_PlayerMoveComponent::StaticClass, TEXT("/Script/Tuoom"), TEXT("UC_PlayerMoveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_PlayerMoveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
