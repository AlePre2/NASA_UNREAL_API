// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/EPIC/EPIC_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPIC_Base() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	NASA_API_API UClass* Z_Construct_UClass_UEPIC_Base();
	NASA_API_API UClass* Z_Construct_UClass_UEPIC_Base_NoRegister();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FEPICCoordinates();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FEPICResponse();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EPICCoordinates;
class UScriptStruct* FEPICCoordinates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EPICCoordinates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EPICCoordinates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEPICCoordinates, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("EPICCoordinates"));
	}
	return Z_Registration_Info_UScriptStruct_EPICCoordinates.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FEPICCoordinates>()
{
	return FEPICCoordinates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEPICCoordinates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEPICCoordinates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lat_MetaData[] = {
		{ "Category", "EPICCoordinates" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lat = { "lat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICCoordinates, lat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lat_MetaData), Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lon_MetaData[] = {
		{ "Category", "EPICCoordinates" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lon = { "lon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICCoordinates, lon), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lon_MetaData), Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEPICCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewProp_lon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEPICCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"EPICCoordinates",
		Z_Construct_UScriptStruct_FEPICCoordinates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICCoordinates_Statics::PropPointers),
		sizeof(FEPICCoordinates),
		alignof(FEPICCoordinates),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICCoordinates_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEPICCoordinates_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICCoordinates_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEPICCoordinates()
	{
		if (!Z_Registration_Info_UScriptStruct_EPICCoordinates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EPICCoordinates.InnerSingleton, Z_Construct_UScriptStruct_FEPICCoordinates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EPICCoordinates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EPICResponse;
class UScriptStruct* FEPICResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EPICResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EPICResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEPICResponse, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("EPICResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EPICResponse.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FEPICResponse>()
{
	return FEPICResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEPICResponse_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_centroid_coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_centroid_coordinates;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEPICResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEPICResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_identifier_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_identifier = { "identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, identifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_identifier_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_caption_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_caption = { "caption", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, caption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_caption_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_caption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_image_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, image), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_image_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_date_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_date_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_version_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_version_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_version_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_centroid_coordinates_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_centroid_coordinates = { "centroid_coordinates", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, centroid_coordinates), Z_Construct_UScriptStruct_FEPICCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_centroid_coordinates_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_centroid_coordinates_MetaData) }; // 234227399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_dscovr_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_dscovr_j2000_position = { "dscovr_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, dscovr_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_dscovr_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_dscovr_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_lunar_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_lunar_j2000_position = { "lunar_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, lunar_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_lunar_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_lunar_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_sun_j2000_position_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_sun_j2000_position = { "sun_j2000_position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, sun_j2000_position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_sun_j2000_position_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_sun_j2000_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_attitude_quaternions_MetaData[] = {
		{ "Category", "EPICResponse" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_attitude_quaternions = { "attitude_quaternions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEPICResponse, attitude_quaternions), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_attitude_quaternions_MetaData), Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_attitude_quaternions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEPICResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_caption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_centroid_coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_dscovr_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_lunar_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_sun_j2000_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEPICResponse_Statics::NewProp_attitude_quaternions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEPICResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"EPICResponse",
		Z_Construct_UScriptStruct_FEPICResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::PropPointers),
		sizeof(FEPICResponse),
		alignof(FEPICResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEPICResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEPICResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEPICResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EPICResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EPICResponse.InnerSingleton, Z_Construct_UScriptStruct_FEPICResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EPICResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics
	{
		struct EPIC_Base_eventEPICResponsDelegate_Parms
		{
			TArray<FEPICResponse> EPIC_Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EPIC_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EPIC_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EPIC_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data_Inner = { "EPIC_Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEPICResponse, METADATA_PARAMS(0, nullptr) }; // 52756627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data = { "EPIC_Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EPIC_Base_eventEPICResponsDelegate_Parms, EPIC_Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data_MetaData), Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data_MetaData) }; // 52756627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::NewProp_EPIC_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEPIC_Base, nullptr, "EPICResponsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::EPIC_Base_eventEPICResponsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::EPIC_Base_eventEPICResponsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UEPIC_Base::FEPICResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& EPICResponsDelegate, TArray<FEPICResponse> const& EPIC_Data)
{
	struct EPIC_Base_eventEPICResponsDelegate_Parms
	{
		TArray<FEPICResponse> EPIC_Data;
	};
	EPIC_Base_eventEPICResponsDelegate_Parms Parms;
	Parms.EPIC_Data=EPIC_Data;
	EPICResponsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics
	{
		struct EPIC_Base_eventFail_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EPIC_Base_eventFail_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEPIC_Base, nullptr, "Fail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::EPIC_Base_eventFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::EPIC_Base_eventFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UEPIC_Base::FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error)
{
	struct EPIC_Base_eventFail_Parms
	{
		FString Error;
	};
	EPIC_Base_eventFail_Parms Parms;
	Parms.Error=Error;
	Fail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEPIC_Base::execSendHTTPRequest)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AdditionalKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPRequest(Z_Param_Out_AdditionalKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEPIC_Base::execEPIC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEPIC_Base**)Z_Param__Result=UEPIC_Base::EPIC();
		P_NATIVE_END;
	}
	void UEPIC_Base::StaticRegisterNativesUEPIC_Base()
	{
		UClass* Class = UEPIC_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EPIC", &UEPIC_Base::execEPIC },
			{ "SendHTTPRequest", &UEPIC_Base::execSendHTTPRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEPIC_Base_EPIC_Statics
	{
		struct EPIC_Base_eventEPIC_Parms
		{
			UEPIC_Base* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EPIC_Base_eventEPIC_Parms, ReturnValue), Z_Construct_UClass_UEPIC_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::Function_MetaDataParams[] = {
		{ "Category", "NASA_API" },
		{ "DisplayName", "EPIC" },
		{ "Keywords", "NASA" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEPIC_Base, nullptr, "EPIC", nullptr, nullptr, Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::EPIC_Base_eventEPIC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::EPIC_Base_eventEPIC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEPIC_Base_EPIC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEPIC_Base_EPIC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics
	{
		struct EPIC_Base_eventSendHTTPRequest_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EPIC_Base_eventSendHTTPRequest_Parms, AdditionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData), Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::NewProp_AdditionalKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEPIC_Base, nullptr, "SendHTTPRequest", nullptr, nullptr, Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::EPIC_Base_eventSendHTTPRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::EPIC_Base_eventSendHTTPRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEPIC_Base);
	UClass* Z_Construct_UClass_UEPIC_Base_NoRegister()
	{
		return UEPIC_Base::StaticClass();
	}
	struct Z_Construct_UClass_UEPIC_Base_Statics
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
	UObject* (*const Z_Construct_UClass_UEPIC_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEPIC_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEPIC_Base_EPIC, "EPIC" }, // 1479256789
		{ &Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature, "EPICResponsDelegate__DelegateSignature" }, // 1898375076
		{ &Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature, "Fail__DelegateSignature" }, // 3852077147
		{ &Z_Construct_UFunction_UEPIC_Base_SendHTTPRequest, "SendHTTPRequest" }, // 2379663130
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEPIC_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EPIC/EPIC_Base.h" },
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEPIC_Base, OnSuccess), Z_Construct_UDelegateFunction_UEPIC_Base_EPICResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnSuccess_MetaData) }; // 1898375076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/EPIC/EPIC_Base.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEPIC_Base, OnFail), Z_Construct_UDelegateFunction_UEPIC_Base_Fail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnFail_MetaData) }; // 3852077147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEPIC_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEPIC_Base_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEPIC_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEPIC_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEPIC_Base_Statics::ClassParams = {
		&UEPIC_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEPIC_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UEPIC_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEPIC_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEPIC_Base()
	{
		if (!Z_Registration_Info_UClass_UEPIC_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEPIC_Base.OuterSingleton, Z_Construct_UClass_UEPIC_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEPIC_Base.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UEPIC_Base>()
	{
		return UEPIC_Base::StaticClass();
	}
	UEPIC_Base::UEPIC_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEPIC_Base);
	UEPIC_Base::~UEPIC_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ScriptStructInfo[] = {
		{ FEPICCoordinates::StaticStruct, Z_Construct_UScriptStruct_FEPICCoordinates_Statics::NewStructOps, TEXT("EPICCoordinates"), &Z_Registration_Info_UScriptStruct_EPICCoordinates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEPICCoordinates), 234227399U) },
		{ FEPICResponse::StaticStruct, Z_Construct_UScriptStruct_FEPICResponse_Statics::NewStructOps, TEXT("EPICResponse"), &Z_Registration_Info_UScriptStruct_EPICResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEPICResponse), 52756627U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEPIC_Base, UEPIC_Base::StaticClass, TEXT("UEPIC_Base"), &Z_Registration_Info_UClass_UEPIC_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEPIC_Base), 1889298893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_3316063960(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_EPIC_EPIC_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
