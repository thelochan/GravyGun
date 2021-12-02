// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gravy/gravyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegravyHUD() {}
// Cross Module References
	GRAVY_API UClass* Z_Construct_UClass_AgravyHUD_NoRegister();
	GRAVY_API UClass* Z_Construct_UClass_AgravyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_gravy();
// End Cross Module References
	void AgravyHUD::StaticRegisterNativesAgravyHUD()
	{
	}
	UClass* Z_Construct_UClass_AgravyHUD_NoRegister()
	{
		return AgravyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AgravyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AgravyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_gravy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AgravyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "gravyHUD.h" },
		{ "ModuleRelativePath", "gravyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AgravyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AgravyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AgravyHUD_Statics::ClassParams = {
		&AgravyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AgravyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AgravyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AgravyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AgravyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AgravyHUD, 3940197107);
	template<> GRAVY_API UClass* StaticClass<AgravyHUD>()
	{
		return AgravyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AgravyHUD(Z_Construct_UClass_AgravyHUD, &AgravyHUD::StaticClass, TEXT("/Script/gravy"), TEXT("AgravyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AgravyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
