// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/NASA_APISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNASA_APISettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NASA_API_API UClass* Z_Construct_UClass_UNASA_APISettings();
	NASA_API_API UClass* Z_Construct_UClass_UNASA_APISettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	void UNASA_APISettings::StaticRegisterNativesUNASA_APISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNASA_APISettings);
	UClass* Z_Construct_UClass_UNASA_APISettings_NoRegister()
	{
		return UNASA_APISettings::StaticClass();
	}
	struct Z_Construct_UClass_UNASA_APISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNASA_APISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNASA_APISettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNASA_APISettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NASA_APISettings.h" },
		{ "ModuleRelativePath", "Public/NASA_APISettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNASA_APISettings_Statics::NewProp_APIKey_MetaData[] = {
		{ "Category", "NASA API Settings" },
		{ "ModuleRelativePath", "Public/NASA_APISettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNASA_APISettings_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNASA_APISettings, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNASA_APISettings_Statics::NewProp_APIKey_MetaData), Z_Construct_UClass_UNASA_APISettings_Statics::NewProp_APIKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNASA_APISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNASA_APISettings_Statics::NewProp_APIKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNASA_APISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNASA_APISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNASA_APISettings_Statics::ClassParams = {
		&UNASA_APISettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNASA_APISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNASA_APISettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNASA_APISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNASA_APISettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNASA_APISettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNASA_APISettings()
	{
		if (!Z_Registration_Info_UClass_UNASA_APISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNASA_APISettings.OuterSingleton, Z_Construct_UClass_UNASA_APISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNASA_APISettings.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UNASA_APISettings>()
	{
		return UNASA_APISettings::StaticClass();
	}
	UNASA_APISettings::UNASA_APISettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNASA_APISettings);
	UNASA_APISettings::~UNASA_APISettings() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_NASA_APISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_NASA_APISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNASA_APISettings, UNASA_APISettings::StaticClass, TEXT("UNASA_APISettings"), &Z_Registration_Info_UClass_UNASA_APISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNASA_APISettings), 1090110556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_NASA_APISettings_h_3892685568(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_NASA_APISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_NASA_APISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
