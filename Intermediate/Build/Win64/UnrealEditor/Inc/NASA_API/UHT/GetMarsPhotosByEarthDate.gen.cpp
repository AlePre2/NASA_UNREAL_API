// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NASA_API/Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMarsPhotosByEarthDate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	NASA_API_API UClass* Z_Construct_UClass_UGetMarsPhotosByEarthDate();
	NASA_API_API UClass* Z_Construct_UClass_UGetMarsPhotosByEarthDate_NoRegister();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature();
	NASA_API_API UFunction* Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FCameraInfo();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FMarsResponse();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FRoverCameraInfo();
	NASA_API_API UScriptStruct* Z_Construct_UScriptStruct_FRoverInfo();
	UPackage* Z_Construct_UPackage__Script_NASA_API();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraInfo;
class UScriptStruct* FCameraInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraInfo, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("CameraInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraInfo.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FCameraInfo>()
{
	return FCameraInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rover_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rover_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_full_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_full_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "CameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraInfo, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "CameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_rover_id_MetaData[] = {
		{ "Category", "CameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_rover_id = { "rover_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraInfo, rover_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_rover_id_MetaData), Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_rover_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_full_name_MetaData[] = {
		{ "Category", "CameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_full_name = { "full_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraInfo, full_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_full_name_MetaData), Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_full_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_rover_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraInfo_Statics::NewProp_full_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"CameraInfo",
		Z_Construct_UScriptStruct_FCameraInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::PropPointers),
		sizeof(FCameraInfo),
		alignof(FCameraInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCameraInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoverCameraInfo;
class UScriptStruct* FRoverCameraInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoverCameraInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoverCameraInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoverCameraInfo, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("RoverCameraInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RoverCameraInfo.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FRoverCameraInfo>()
{
	return FRoverCameraInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoverCameraInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_full_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_full_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoverCameraInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "RoverCameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverCameraInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_full_name_MetaData[] = {
		{ "Category", "RoverCameraInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_full_name = { "full_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverCameraInfo, full_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_full_name_MetaData), Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_full_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewProp_full_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"RoverCameraInfo",
		Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::PropPointers),
		sizeof(FRoverCameraInfo),
		alignof(FRoverCameraInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoverCameraInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RoverCameraInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoverCameraInfo.InnerSingleton, Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoverCameraInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoverInfo;
class UScriptStruct* FRoverInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoverInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoverInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoverInfo, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("RoverInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RoverInfo.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FRoverInfo>()
{
	return FRoverInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoverInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_landing_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_landing_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_launch_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_launch_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_sol_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_max_sol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_max_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_total_photos_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_total_photos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cameras_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameras_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cameras;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoverInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoverInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_landing_date_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_landing_date = { "landing_date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, landing_date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_landing_date_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_landing_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_launch_date_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_launch_date = { "launch_date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, launch_date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_launch_date_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_launch_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_status_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_sol_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_sol = { "max_sol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, max_sol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_sol_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_sol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_date_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_date = { "max_date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, max_date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_date_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_total_photos_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_total_photos = { "total_photos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, total_photos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_total_photos_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_total_photos_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras_Inner = { "cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoverCameraInfo, METADATA_PARAMS(0, nullptr) }; // 1500549189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras_MetaData[] = {
		{ "Category", "RoverInfo" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras = { "cameras", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoverInfo, cameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras_MetaData), Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras_MetaData) }; // 1500549189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoverInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_landing_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_launch_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_sol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_max_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_total_photos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoverInfo_Statics::NewProp_cameras,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoverInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"RoverInfo",
		Z_Construct_UScriptStruct_FRoverInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::PropPointers),
		sizeof(FRoverInfo),
		alignof(FRoverInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoverInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoverInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRoverInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RoverInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoverInfo.InnerSingleton, Z_Construct_UScriptStruct_FRoverInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoverInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarsResponse;
class UScriptStruct* FMarsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarsResponse, (UObject*)Z_Construct_UPackage__Script_NASA_API(), TEXT("MarsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MarsResponse.OuterSingleton;
}
template<> NASA_API_API UScriptStruct* StaticStruct<FMarsResponse>()
{
	return FMarsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMarsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sol_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_img_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_img_src;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_earth_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_earth_date;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rover_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_id_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_sol_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_sol = { "sol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, sol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_sol_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_sol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_img_src_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_img_src = { "img_src", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, img_src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_img_src_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_img_src_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_earth_date_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_earth_date = { "earth_date", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, earth_date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_earth_date_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_earth_date_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, camera), Z_Construct_UScriptStruct_FCameraInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_camera_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_camera_MetaData) }; // 2828429225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_rover_MetaData[] = {
		{ "Category", "MarsResponse" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_rover = { "rover", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarsResponse, rover), Z_Construct_UScriptStruct_FRoverInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_rover_MetaData), Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_rover_MetaData) }; // 3295923296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_sol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_img_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_earth_date,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarsResponse_Statics::NewProp_rover,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
		nullptr,
		&NewStructOps,
		"MarsResponse",
		Z_Construct_UScriptStruct_FMarsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::PropPointers),
		sizeof(FMarsResponse),
		alignof(FMarsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMarsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMarsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MarsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarsResponse.InnerSingleton, Z_Construct_UScriptStruct_FMarsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MarsResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics
	{
		struct GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms
		{
			TArray<FMarsResponse> MarsPhoto_Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarsPhoto_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarsPhoto_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarsPhoto_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data_Inner = { "MarsPhoto_Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMarsResponse, METADATA_PARAMS(0, nullptr) }; // 3326591578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data = { "MarsPhoto_Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms, MarsPhoto_Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data_MetaData), Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data_MetaData) }; // 3326591578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::NewProp_MarsPhoto_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMarsPhotosByEarthDate, nullptr, "MarsPhotoResponsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGetMarsPhotosByEarthDate::FMarsPhotoResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& MarsPhotoResponsDelegate, TArray<FMarsResponse> const& MarsPhoto_Data)
{
	struct GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms
	{
		TArray<FMarsResponse> MarsPhoto_Data;
	};
	GetMarsPhotosByEarthDate_eventMarsPhotoResponsDelegate_Parms Parms;
	Parms.MarsPhoto_Data=MarsPhoto_Data;
	MarsPhotoResponsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics
	{
		struct GetMarsPhotosByEarthDate_eventFail_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetMarsPhotosByEarthDate_eventFail_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMarsPhotosByEarthDate, nullptr, "Fail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::GetMarsPhotosByEarthDate_eventFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::GetMarsPhotosByEarthDate_eventFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGetMarsPhotosByEarthDate::FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error)
{
	struct GetMarsPhotosByEarthDate_eventFail_Parms
	{
		FString Error;
	};
	GetMarsPhotosByEarthDate_eventFail_Parms Parms;
	Parms.Error=Error;
	Fail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetMarsPhotosByEarthDate::execSendHTTPRequest)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AdditionalKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendHTTPRequest(Z_Param_Out_AdditionalKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetMarsPhotosByEarthDate::execGetMarsPhotoByEarthDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetMarsPhotosByEarthDate**)Z_Param__Result=UGetMarsPhotosByEarthDate::GetMarsPhotoByEarthDate();
		P_NATIVE_END;
	}
	void UGetMarsPhotosByEarthDate::StaticRegisterNativesUGetMarsPhotosByEarthDate()
	{
		UClass* Class = UGetMarsPhotosByEarthDate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMarsPhotoByEarthDate", &UGetMarsPhotosByEarthDate::execGetMarsPhotoByEarthDate },
			{ "SendHTTPRequest", &UGetMarsPhotosByEarthDate::execSendHTTPRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics
	{
		struct GetMarsPhotosByEarthDate_eventGetMarsPhotoByEarthDate_Parms
		{
			UGetMarsPhotosByEarthDate* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetMarsPhotosByEarthDate_eventGetMarsPhotoByEarthDate_Parms, ReturnValue), Z_Construct_UClass_UGetMarsPhotosByEarthDate_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "NASA_API" },
		{ "DisplayName", "Get Mars photo by earth date" },
		{ "Keywords", "NASA" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMarsPhotosByEarthDate, nullptr, "GetMarsPhotoByEarthDate", nullptr, nullptr, Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::GetMarsPhotosByEarthDate_eventGetMarsPhotoByEarthDate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::GetMarsPhotosByEarthDate_eventGetMarsPhotoByEarthDate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics
	{
		struct GetMarsPhotosByEarthDate_eventSendHTTPRequest_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys = { "AdditionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetMarsPhotosByEarthDate_eventSendHTTPRequest_Parms, AdditionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData), Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::NewProp_AdditionalKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMarsPhotosByEarthDate, nullptr, "SendHTTPRequest", nullptr, nullptr, Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::GetMarsPhotosByEarthDate_eventSendHTTPRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::GetMarsPhotosByEarthDate_eventSendHTTPRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetMarsPhotosByEarthDate);
	UClass* Z_Construct_UClass_UGetMarsPhotosByEarthDate_NoRegister()
	{
		return UGetMarsPhotosByEarthDate::StaticClass();
	}
	struct Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics
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
	UObject* (*const Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NASA_API,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature, "Fail__DelegateSignature" }, // 2568875778
		{ &Z_Construct_UFunction_UGetMarsPhotosByEarthDate_GetMarsPhotoByEarthDate, "GetMarsPhotoByEarthDate" }, // 3073202779
		{ &Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature, "MarsPhotoResponsDelegate__DelegateSignature" }, // 882527294
		{ &Z_Construct_UFunction_UGetMarsPhotosByEarthDate_SendHTTPRequest, "SendHTTPRequest" }, // 1568838077
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetMarsPhotosByEarthDate, OnSuccess), Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_MarsPhotoResponsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnSuccess_MetaData) }; // 882527294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarsRoverPhotos/GetMarsPhotosByEarthDate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetMarsPhotosByEarthDate, OnFail), Z_Construct_UDelegateFunction_UGetMarsPhotosByEarthDate_Fail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnFail_MetaData), Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnFail_MetaData) }; // 2568875778
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetMarsPhotosByEarthDate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::ClassParams = {
		&UGetMarsPhotosByEarthDate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGetMarsPhotosByEarthDate()
	{
		if (!Z_Registration_Info_UClass_UGetMarsPhotosByEarthDate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetMarsPhotosByEarthDate.OuterSingleton, Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetMarsPhotosByEarthDate.OuterSingleton;
	}
	template<> NASA_API_API UClass* StaticClass<UGetMarsPhotosByEarthDate>()
	{
		return UGetMarsPhotosByEarthDate::StaticClass();
	}
	UGetMarsPhotosByEarthDate::UGetMarsPhotosByEarthDate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetMarsPhotosByEarthDate);
	UGetMarsPhotosByEarthDate::~UGetMarsPhotosByEarthDate() {}
	struct Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ScriptStructInfo[] = {
		{ FCameraInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraInfo_Statics::NewStructOps, TEXT("CameraInfo"), &Z_Registration_Info_UScriptStruct_CameraInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraInfo), 2828429225U) },
		{ FRoverCameraInfo::StaticStruct, Z_Construct_UScriptStruct_FRoverCameraInfo_Statics::NewStructOps, TEXT("RoverCameraInfo"), &Z_Registration_Info_UScriptStruct_RoverCameraInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoverCameraInfo), 1500549189U) },
		{ FRoverInfo::StaticStruct, Z_Construct_UScriptStruct_FRoverInfo_Statics::NewStructOps, TEXT("RoverInfo"), &Z_Registration_Info_UScriptStruct_RoverInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoverInfo), 3295923296U) },
		{ FMarsResponse::StaticStruct, Z_Construct_UScriptStruct_FMarsResponse_Statics::NewStructOps, TEXT("MarsResponse"), &Z_Registration_Info_UScriptStruct_MarsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarsResponse), 3326591578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetMarsPhotosByEarthDate, UGetMarsPhotosByEarthDate::StaticClass, TEXT("UGetMarsPhotosByEarthDate"), &Z_Registration_Info_UClass_UGetMarsPhotosByEarthDate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetMarsPhotosByEarthDate), 2572524625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_345736080(TEXT("/Script/NASA_API"),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
