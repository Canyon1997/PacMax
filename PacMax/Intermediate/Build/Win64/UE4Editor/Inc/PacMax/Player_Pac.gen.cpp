// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMax/Pawns/Player_Pac.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Pac() {}
// Cross Module References
	PACMAX_API UClass* Z_Construct_UClass_APlayer_Pac_NoRegister();
	PACMAX_API UClass* Z_Construct_UClass_APlayer_Pac();
	PACMAX_API UClass* Z_Construct_UClass_ABase_Pac();
	UPackage* Z_Construct_UPackage__Script_PacMax();
// End Cross Module References
	void APlayer_Pac::StaticRegisterNativesAPlayer_Pac()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Pac_NoRegister()
	{
		return APlayer_Pac::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Pac_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Pac_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABase_Pac,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Pac_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/Player_Pac.h" },
		{ "ModuleRelativePath", "Pawns/Player_Pac.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Pac_Statics::NewProp_DashTimer_MetaData[] = {
		{ "Category", "Player_Pac" },
		{ "ModuleRelativePath", "Pawns/Player_Pac.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Pac_Statics::NewProp_DashTimer = { "DashTimer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Pac, DashTimer), METADATA_PARAMS(Z_Construct_UClass_APlayer_Pac_Statics::NewProp_DashTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Pac_Statics::NewProp_DashTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Pac_Statics::NewProp_SpeedModifier_MetaData[] = {
		{ "Category", "Player_Pac" },
		{ "ModuleRelativePath", "Pawns/Player_Pac.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Pac_Statics::NewProp_SpeedModifier = { "SpeedModifier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Pac, SpeedModifier), METADATA_PARAMS(Z_Construct_UClass_APlayer_Pac_Statics::NewProp_SpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Pac_Statics::NewProp_SpeedModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Pac_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Pac_Statics::NewProp_DashTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Pac_Statics::NewProp_SpeedModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Pac_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Pac>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Pac_Statics::ClassParams = {
		&APlayer_Pac::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer_Pac_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Pac_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Pac_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Pac_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Pac()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Pac_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Pac, 3376058064);
	template<> PACMAX_API UClass* StaticClass<APlayer_Pac>()
	{
		return APlayer_Pac::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Pac(Z_Construct_UClass_APlayer_Pac, &APlayer_Pac::StaticClass, TEXT("/Script/PacMax"), TEXT("APlayer_Pac"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Pac);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
