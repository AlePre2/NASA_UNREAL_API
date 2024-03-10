// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/Exoplanet/StarWithExoplanetList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarWithExoplanetList() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	NASA_API_API UClass* Z_Construct_UClass_UStarWithExoplanetList();
	NASA_API_API UClass* Z_Construct_UClass_UStarWithExoplanetList_NoRegister();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FEPICResponse2();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EPICResponse2;
class UScriptStruct* FEPICResponse2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EPICResponse2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EPICResponse2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEPICResponse2, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("EPICResponse2"));
	}
	return Z_Registration_Info_UScriptStruct_EPICResponse2.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FEPICResponse2>()
{
	return FEPICResponse2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEPICResponse2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_caption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_caption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dscovr_j2000_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dscovr_j2000_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lunar_j2000_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lunar_j2000_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sun_j2000_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sun_j2000_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attitude_quaternions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_attitude_quaternions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEPICResponse2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_identifier_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_identifier = { "identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_identifier_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_caption_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_caption = { "caption", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, caption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_caption_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_caption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_image_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, image), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_image_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_date_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_date_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_version_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_version_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_dscovr_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_dscovr_j2000_position = { "dscovr_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, dscovr_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_dscovr_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_dscovr_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_lunar_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_lunar_j2000_position = { "lunar_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, lunar_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_lunar_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_lunar_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_sun_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_sun_j2000_position = { "sun_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, sun_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_sun_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_sun_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_attitude_quaternions_MetaData[] = {
		{ "Category", "EPICResponse2" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_attitude_quaternions = { "attitude_quaternions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse2, attitude_quaternions), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_attitude_quaternions_MetaData), Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_attitude_quaternions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEPICResponse2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_caption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_dscovr_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_lunar_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_sun_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewProp_attitude_quaternions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEPICResponse2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"EPICResponse2",
		Z_Construct_UScriptStruct_FEPICResponse2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::PropPointers),
		sizeof(FEPICResponse2),
		alignof(FEPICResponse2),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEPICResponse2_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse2_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEPICResponse2()
	{
		if (!Z_Registration_Info_UScriptStruct_EPICResponse2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EPICResponse2.InnerSingleton, Z_Construct_UScriptStruct_FEPICResponse2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EPICResponse2.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics
	{
		struct StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms
		{
			TArray<FString> Exoplanets;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Exoplanets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exoplanets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Exoplanets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets_Inner = { "Exoplanets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets = { "Exoplanets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms, Exoplanets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets_MetaData), Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::NewProp_Exoplanets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStarWithExoplanetList, nullptr, "StartWithExoplanetResponsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UStarWithExoplanetList::FStartWithExoplanetResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& StartWithExoplanetResponsDelegate, TArray<FString> const& Exoplanets)
{
	struct StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms
	{
		TArray<FString> Exoplanets;
	};
	StarWithExoplanetList_eventStartWithExoplanetResponsDelegate_Parms Parms;
	Parms.Exoplanets=Exoplanets;
	StartWithExoplanetResponsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics
	{
		struct StarWithExoplanetList_eventFail_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StarWithExoplanetList_eventFail_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStarWithExoplanetList, nullptr, "Fail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::StarWithExoplanetList_eventFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::StarWithExoplanetList_eventFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UStarWithExoplanetList::FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error)
{
	struct StarWithExoplanetList_eventFail_Parms
	{
		FString Error;
	};
	StarWithExoplanetList_eventFail_Parms Parms;
	Parms.Error=Error;
	Fail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UStarWithExoplanetList::execSendHTTPRequest)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AdditionalKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPRequest(Z_Param_Out_AdditionalKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStarWithExoplanetList::execStarWithExoplanetList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStarWithExoplanetList**)Z_Param__Result=UStarWithExoplanetList::StarWithExoplanetList();
		P_NATIVE_END;
	}
	void UStarWithExoplanetList::StaticRegisterNativesUStarWithExoplanetList()
	{
		UClass* Class = UStarWithExoplanetList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendHTTPRequest", &UStarWithExoplanetList::execSendHTTPRequest },
			{ "StarWithExoplanetList", &UStarWithExoplanetList::execStarWithExoplanetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics
	{
		struct StarWithExoplanetList_eventSendHTTPRequest_Parms
		{
			TArray<FString> AdditionalKeys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StarWithExoplanetList_eventSendHTTPRequest_Parms, AdditionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData), Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::NewProp_AdditionalKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStarWithExoplanetList, nullptr, "SendHTTPRequest", nullptr, nullptr, Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::StarWithExoplanetList_eventSendHTTPRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::StarWithExoplanetList_eventSendHTTPRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics
	{
		struct StarWithExoplanetList_eventStarWithExoplanetList_Parms
		{
			UStarWithExoplanetList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StarWithExoplanetList_eventStarWithExoplanetList_Parms, ReturnValue), Z_Construct_UClass_UStarWithExoplanetList_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::Function_MetaDataParams[] = {
		{ "Category", "NASA_API" },
		{ "DisplayName", "Star with exoplanet" },
		{ "Keywords", "NASA" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStarWithExoplanetList, nullptr, "StarWithExoplanetList", nullptr, nullptr, Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::StarWithExoplanetList_eventStarWithExoplanetList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::StarWithExoplanetList_eventStarWithExoplanetList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStarWithExoplanetList);
	UClass* Z_Construct_UClass_UStarWithExoplanetList_NoRegister()
	{
		return UStarWithExoplanetList::StaticClass();
	}
	struct Z_Construct_UClass_UStarWithExoplanetList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarWithExoplanetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStarWithExoplanetList_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature, "Fail__DelegateSignature" }, // 3319584741
		{ &Z_Construct_UFunction_UStarWithExoplanetList_SendHTTPRequest, "SendHTTPRequest" }, // 1050626560
		{ &Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature, "StartWithExoplanetResponsDelegate__DelegateSignature" }, // 114570427
		{ &Z_Construct_UFunction_UStarWithExoplanetList_StarWithExoplanetList, "StarWithExoplanetList" }, // 2807618226
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarWithExoplanetList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exoplanet/StarWithExoplanetList.h" },
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStarWithExoplanetList, OnSuccess), Z_Construct_UDelegateFunction_UStarWithExoplanetList_StartWithExoplanetResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnSuccess_MetaData) }; // 114570427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Exoplanet/StarWithExoplanetList.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStarWithExoplanetList, OnFail), Z_Construct_UDelegateFunction_UStarWithExoplanetList_Fail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnFail_MetaData) }; // 3319584741
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStarWithExoplanetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarWithExoplanetList_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarWithExoplanetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarWithExoplanetList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStarWithExoplanetList_Statics::ClassParams = {
		&UStarWithExoplanetList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStarWithExoplanetList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::Class_MetaDataParams), Z_Construct_UClass_UStarWithExoplanetList_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStarWithExoplanetList_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStarWithExoplanetList()
	{
		if (!Z_Registration_Info_UClass_UStarWithExoplanetList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStarWithExoplanetList.OuterSingleton, Z_Construct_UClass_UStarWithExoplanetList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStarWithExoplanetList.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UStarWithExoplanetList>()
	{
		return UStarWithExoplanetList::StaticClass();
	}
	UStarWithExoplanetList::UStarWithExoplanetList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStarWithExoplanetList);
	UStarWithExoplanetList::~UStarWithExoplanetList() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ScriptStructInfo[] = {
		{ FEPICResponse2::StaticStruct, Z_Construct_UScriptStruct_FEPICResponse2_Statics::NewStructOps, TEXT("EPICResponse2"), &Z_Registration_Info_UScriptStruct_EPICResponse2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEPICResponse2), 335713982U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStarWithExoplanetList, UStarWithExoplanetList::StaticClass, TEXT("UStarWithExoplanetList"), &Z_Registration_Info_UClass_UStarWithExoplanetList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStarWithExoplanetList), 1101979309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_564172782(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Exoplanet_StarWithExoplanetList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
