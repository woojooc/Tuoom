// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/WJ_PlayListCtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWJ_PlayListCtr() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_UWJ_PlayListCtr_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_UWJ_PlayListCtr();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UWJ_PlayListCtr::StaticRegisterNativesUWJ_PlayListCtr()
	{
	}
	UClass* Z_Construct_UClass_UWJ_PlayListCtr_NoRegister()
	{
		return UWJ_PlayListCtr::StaticClass();
	}
	struct Z_Construct_UClass_UWJ_PlayListCtr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWJ_PlayListCtr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWJ_PlayListCtr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WJ_PlayListCtr.h" },
		{ "ModuleRelativePath", "WJ_PlayListCtr.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWJ_PlayListCtr_Statics::NewProp_sounds_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "WJ_PlayListCtr.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWJ_PlayListCtr_Statics::NewProp_sounds = { "sounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWJ_PlayListCtr, sounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWJ_PlayListCtr_Statics::NewProp_sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWJ_PlayListCtr_Statics::NewProp_sounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWJ_PlayListCtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWJ_PlayListCtr_Statics::NewProp_sounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWJ_PlayListCtr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWJ_PlayListCtr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWJ_PlayListCtr_Statics::ClassParams = {
		&UWJ_PlayListCtr::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWJ_PlayListCtr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWJ_PlayListCtr_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWJ_PlayListCtr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWJ_PlayListCtr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWJ_PlayListCtr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWJ_PlayListCtr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWJ_PlayListCtr, 1780570162);
	template<> TUOOM_API UClass* StaticClass<UWJ_PlayListCtr>()
	{
		return UWJ_PlayListCtr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWJ_PlayListCtr(Z_Construct_UClass_UWJ_PlayListCtr, &UWJ_PlayListCtr::StaticClass, TEXT("/Script/Tuoom"), TEXT("UWJ_PlayListCtr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWJ_PlayListCtr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
