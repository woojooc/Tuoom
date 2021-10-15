// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/C_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Player() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_AC_Player_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_AC_Player();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerAnimInstance_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerMoveComponent_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerHandComponent_NoRegister();
// End Cross Module References
	void AC_Player::StaticRegisterNativesAC_Player()
	{
	}
	UClass* Z_Construct_UClass_AC_Player_NoRegister()
	{
		return AC_Player::StaticClass();
	}
	struct Z_Construct_UClass_AC_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetPointer_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetPointer_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetPointer_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widgetPointer_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Player.h" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_cameraRoot_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_cameraRoot = { "cameraRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, cameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_cameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_cameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_playerCam_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_playerCam = { "playerCam", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, playerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_playerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_playerCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_leftController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_leftController = { "leftController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, leftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_leftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_leftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_rightController_MetaData[] = {
		{ "Category", "PlayerSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_rightController = { "rightController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, rightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_rightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_rightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_L_MetaData[] = {
		{ "Category", "WidgetPointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_L = { "widgetPointer_L", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, widgetPointer_L), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_R_MetaData[] = {
		{ "Category", "WidgetPointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_R = { "widgetPointer_R", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, widgetPointer_R), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_anim_MetaData[] = {
		{ "Category", "AnimComponent" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, anim), Z_Construct_UClass_UC_PlayerAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_moveComp_MetaData[] = {
		{ "Category", "MoveComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, moveComp), Z_Construct_UClass_UC_PlayerMoveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_moveComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_moveComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Player_Statics::NewProp_handComp_MetaData[] = {
		{ "Category", "HandComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Player_Statics::NewProp_handComp = { "handComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Player, handComp), Z_Construct_UClass_UC_PlayerHandComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::NewProp_handComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::NewProp_handComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_cameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_playerCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_leftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_rightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_widgetPointer_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_moveComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Player_Statics::NewProp_handComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Player_Statics::ClassParams = {
		&AC_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Player, 2158874701);
	template<> TUOOM_API UClass* StaticClass<AC_Player>()
	{
		return AC_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Player(Z_Construct_UClass_AC_Player, &AC_Player::StaticClass, TEXT("/Script/Tuoom"), TEXT("AC_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
