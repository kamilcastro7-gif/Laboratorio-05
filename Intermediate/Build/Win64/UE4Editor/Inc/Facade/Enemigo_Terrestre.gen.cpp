// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade/Enemigo_Terrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_Terrestre() {}
// Cross Module References
	FACADE_API UClass* Z_Construct_UClass_AEnemigo_Terrestre_NoRegister();
	FACADE_API UClass* Z_Construct_UClass_AEnemigo_Terrestre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade();
// End Cross Module References
	void AEnemigo_Terrestre::StaticRegisterNativesAEnemigo_Terrestre()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo_Terrestre_NoRegister()
	{
		return AEnemigo_Terrestre::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo_Terrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo_Terrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Terrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo_Terrestre.h" },
		{ "ModuleRelativePath", "Enemigo_Terrestre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo_Terrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_Terrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Terrestre_Statics::ClassParams = {
		&AEnemigo_Terrestre::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Terrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Terrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo_Terrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo_Terrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo_Terrestre, 3490151825);
	template<> FACADE_API UClass* StaticClass<AEnemigo_Terrestre>()
	{
		return AEnemigo_Terrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo_Terrestre(Z_Construct_UClass_AEnemigo_Terrestre, &AEnemigo_Terrestre::StaticClass, TEXT("/Script/Facade"), TEXT("AEnemigo_Terrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_Terrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
