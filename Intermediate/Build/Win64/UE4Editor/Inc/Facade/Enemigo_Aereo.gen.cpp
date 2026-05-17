// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade/Enemigo_Aereo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Aereo() {}
// Cross Module References
	FACADE_API UClass* Z_Construct_UClass_AEnemigo_Aereo_NoRegister();
	FACADE_API UClass* Z_Construct_UClass_AEnemigo_Aereo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade();
// End Cross Module References
	void AEnemigo_Aereo::StaticRegisterNativesAEnemigo_Aereo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo_Aereo_NoRegister()
	{
		return AEnemigo_Aereo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo_Aereo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo_Aereo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Aereo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo_Aereo.h" },
		{ "ModuleRelativePath", "Enemigo_Aereo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo_Aereo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Aereo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Aereo_Statics::ClassParams = {
		&AEnemigo_Aereo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Aereo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Aereo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo_Aereo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo_Aereo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo_Aereo, 143676909);
	template<> FACADE_API UClass* StaticClass<AEnemigo_Aereo>()
	{
		return AEnemigo_Aereo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo_Aereo(Z_Construct_UClass_AEnemigo_Aereo, &AEnemigo_Aereo::StaticClass, TEXT("/Script/Facade"), TEXT("AEnemigo_Aereo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Aereo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
