// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MarsRoverPhotos/GetMarsPhotosByEarthDate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetMarsPhotosByEarthDate;
struct FMarsResponse;
#ifdef NASA_API_GetMarsPhotosByEarthDate_generated_h
#error "GetMarsPhotosByEarthDate.generated.h already included, missing '#pragma once' in GetMarsPhotosByEarthDate.h"
#endif
#define NASA_API_GetMarsPhotosByEarthDate_generated_h

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraInfo_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FCameraInfo>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoverCameraInfo_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FRoverCameraInfo>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoverInfo_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FRoverInfo>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarsResponse_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FMarsResponse>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_105_DELEGATE \
static void FMarsPhotoResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& MarsPhotoResponsDelegate, TArray<FMarsResponse> const& MarsPhoto_Data);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_106_DELEGATE \
static void FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_SPARSE_DATA
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execGetMarsPhotoByEarthDate);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetMarsPhotosByEarthDate(); \
	friend struct Z_Construct_UClass_UGetMarsPhotosByEarthDate_Statics; \
public: \
	DECLARE_CLASS(UGetMarsPhotosByEarthDate, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NASA_API"), NO_API) \
	DECLARE_SERIALIZER(UGetMarsPhotosByEarthDate)


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetMarsPhotosByEarthDate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetMarsPhotosByEarthDate(UGetMarsPhotosByEarthDate&&); \
	NO_API UGetMarsPhotosByEarthDate(const UGetMarsPhotosByEarthDate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetMarsPhotosByEarthDate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetMarsPhotosByEarthDate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetMarsPhotosByEarthDate) \
	NO_API virtual ~UGetMarsPhotosByEarthDate();


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_99_PROLOG
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_SPARSE_DATA \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_INCLASS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NASA_API_API UClass* StaticClass<class UGetMarsPhotosByEarthDate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_MarsRoverPhotos_GetMarsPhotosByEarthDate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
