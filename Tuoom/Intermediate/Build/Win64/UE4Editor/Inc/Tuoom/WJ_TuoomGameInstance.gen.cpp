// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/WJ_TuoomGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWJ_TuoomGameInstance() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_UWJ_TuoomGameInstance_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UWJ_TuoomGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
// End Cross Module References
	void UWJ_TuoomGameInstance::StaticRegisterNativesUWJ_TuoomGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UWJ_TuoomGameInstance_NoRegister()
	{
		return UWJ_TuoomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWJ_TuoomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WJ_TuoomGameInstance.h" },
		{ "ModuleRelativePath", "WJ_TuoomGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWJ_TuoomGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::ClassParams = {
		&UWJ_TuoomGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWJ_TuoomGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWJ_TuoomGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWJ_TuoomGameInstance, 3613150877);
	template<> TUOOM_API UClass* StaticClass<UWJ_TuoomGameInstance>()
	{
		return UWJ_TuoomGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWJ_TuoomGameInstance(Z_Construct_UClass_UWJ_TuoomGameInstance, &UWJ_TuoomGameInstance::StaticClass, TEXT("/Script/Tuoom"), TEXT("UWJ_TuoomGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWJ_TuoomGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
