// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tuoom/ProbFXObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProbFXObj() {}
// Cross Module References
	TUOOM_API UClass* Z_Construct_UClass_AProbFXObj_NoRegister();
	TUOOM_API UClass* Z_Construct_UClass_AProbFXObj();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tuoom();
// End Cross Module References
	void AProbFXObj::StaticRegisterNativesAProbFXObj()
	{
	}
	UClass* Z_Construct_UClass_AProbFXObj_NoRegister()
	{
		return AProbFXObj::StaticClass();
	}
	struct Z_Construct_UClass_AProbFXObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProbFXObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tuoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProbFXObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProbFXObj.h" },
		{ "ModuleRelativePath", "ProbFXObj.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProbFXObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProbFXObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProbFXObj_Statics::ClassParams = {
		&AProbFXObj::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProbFXObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProbFXObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProbFXObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProbFXObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProbFXObj, 1790251852);
	template<> TUOOM_API UClass* StaticClass<AProbFXObj>()
	{
		return AProbFXObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProbFXObj(Z_Construct_UClass_AProbFXObj, &AProbFXObj::StaticClass, TEXT("/Script/Tuoom"), TEXT("AProbFXObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProbFXObj);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
