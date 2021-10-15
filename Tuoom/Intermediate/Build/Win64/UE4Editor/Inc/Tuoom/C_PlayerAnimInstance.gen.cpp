// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/C_PlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_PlayerAnimInstance() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerAnimInstance_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UC_PlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UC_PlayerAnimInstance::StaticRegisterNativesUC_PlayerAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UC_PlayerAnimInstance_NoRegister()
	{
		return UC_PlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UC_PlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHandLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftHandLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftHandRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leftHandRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHandLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightHandLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightHandRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rightHandRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_headLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_headRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_PlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "C_PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandLocation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandLocation = { "leftHandLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, leftHandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandRotation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandRotation = { "leftHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, leftHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandLocation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandLocation = { "rightHandLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, rightHandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandRotation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandRotation = { "rightHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, rightHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headLocation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headLocation = { "headLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, headLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headRotation_MetaData[] = {
		{ "Category", "IK_Settings" },
		{ "ModuleRelativePath", "C_PlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headRotation = { "headRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_PlayerAnimInstance, headRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_PlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_leftHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_rightHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_PlayerAnimInstance_Statics::NewProp_headRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_PlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_PlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_PlayerAnimInstance_Statics::ClassParams = {
		&UC_PlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UC_PlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_PlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_PlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_PlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_PlayerAnimInstance, 196648164);
	template<> TUOOM_API UClass* StaticClass<UC_PlayerAnimInstance>()
	{
		return UC_PlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_PlayerAnimInstance(Z_Construct_UClass_UC_PlayerAnimInstance, &UC_PlayerAnimInstance::StaticClass, TEXT("/Script/Tuoom"), TEXT("UC_PlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_PlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
