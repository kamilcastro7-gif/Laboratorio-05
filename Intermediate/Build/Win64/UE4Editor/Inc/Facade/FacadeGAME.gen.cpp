// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade/FacadeGAME.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeGAME() {}
// Cross Module References
	FACADE_API UClass* Z_Construct_UClass_AFacadeGAME_NoRegister();
	FACADE_API UClass* Z_Construct_UClass_AFacadeGAME();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade();
// End Cross Module References
	void AFacadeGAME::StaticRegisterNativesAFacadeGAME()
	{
	}
	UClass* Z_Construct_UClass_AFacadeGAME_NoRegister()
	{
		return AFacadeGAME::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeGAME_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeGAME_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeGAME_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeGAME.h" },
		{ "ModuleRelativePath", "FacadeGAME.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeGAME_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeGAME>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeGAME_Statics::ClassParams = {
		&AFacadeGAME::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacadeGAME_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeGAME_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeGAME()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeGAME_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeGAME, 2109726396);
	template<> FACADE_API UClass* StaticClass<AFacadeGAME>()
	{
		return AFacadeGAME::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeGAME(Z_Construct_UClass_AFacadeGAME, &AFacadeGAME::StaticClass, TEXT("/Script/Facade"), TEXT("AFacadeGAME"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeGAME);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
