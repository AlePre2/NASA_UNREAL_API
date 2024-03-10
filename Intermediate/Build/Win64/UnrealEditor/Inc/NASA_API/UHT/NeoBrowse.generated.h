// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Asteroids_NeoWS/NeoBrowse.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNeoBrowse;
struct FNeo_Data;
#ifdef NASA_API_NeoBrowse_generated_h
#error "NeoBrowse.generated.h already included, missing '#pragma once' in NeoBrowse.h"
#endif
#define NASA_API_NeoBrowse_generated_h

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinks_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FLinks>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPage_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FPage>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEstimatedDiameterRange_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FEstimatedDiameterRange>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEstimatedDiameter_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FEstimatedDiameter>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCloseApproachData_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FCloseApproachData>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNearEarthObjects_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FNearEarthObjects>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeo_Data_Statics; \
	NASA_API_API static class UScriptStruct* StaticStruct();


template<> NASA_API_API UScriptStruct* StaticStruct<struct FNeo_Data>();

#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_167_DELEGATE \
static void FMarsPhotoResponsDelegate_DelegateWrapper(const FMulticastScriptDelegate& MarsPhotoResponsDelegate, const FNeo_Data Neo_Data);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_168_DELEGATE \
static void FFail_DelegateWrapper(const FMulticastScriptDelegate& Fail, const FString& Error);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_SPARSE_DATA
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execNeo_Browse);


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_ACCESSORS
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeoBrowse(); \
	friend struct Z_Construct_UClass_UNeoBrowse_Statics; \
public: \
	DECLARE_CLASS(UNeoBrowse, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NASA_API"), NO_API) \
	DECLARE_SERIALIZER(UNeoBrowse)


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeoBrowse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNeoBrowse(UNeoBrowse&&); \
	NO_API UNeoBrowse(const UNeoBrowse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeoBrowse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeoBrowse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeoBrowse) \
	NO_API virtual ~UNeoBrowse();


#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_161_PROLOG
#define FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_SPARSE_DATA \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_ACCESSORS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_INCLASS_NO_PURE_DECLS \
	FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NASA_API_API UClass* StaticClass<class UNeoBrowse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alepr_Documents_Unreal_Projects_NASA_API_Project2_Plugins_NASA_API_Source_NASA_API_Public_Asteroids_NeoWS_NeoBrowse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
