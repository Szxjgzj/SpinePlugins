// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpineFuncLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataTable;
class UObject;
class USpineAtlasAsset;
class USpineSkeletonDataAsset;
struct FAssetData;
#ifdef SPINEPLUGIN_SpineFuncLibrary_generated_h
#error "SpineFuncLibrary.generated.h already included, missing '#pragma once' in SpineFuncLibrary.h"
#endif
#define SPINEPLUGIN_SpineFuncLibrary_generated_h

#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpineInfo_Statics; \
	SPINEPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<struct FSpineInfo>();

#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_SPARSE_DATA
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveToDataTable); \
	DECLARE_FUNCTION(execGetAllSpineDataTable); \
	DECLARE_FUNCTION(execGetAllSubClassNames); \
	DECLARE_FUNCTION(execSaveCurrentSpineAsset); \
	DECLARE_FUNCTION(execGetUsefulSpineAssetByPair); \
	DECLARE_FUNCTION(execGetUsefulSpineAssetByPath); \
	DECLARE_FUNCTION(execGetAllSpineSkeletonAsset); \
	DECLARE_FUNCTION(execGetAllSpineAtlasAsset);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineFuncLibrary(); \
	friend struct Z_Construct_UClass_USpineFuncLibrary_Statics; \
public: \
	DECLARE_CLASS(USpineFuncLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineFuncLibrary)


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpineFuncLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineFuncLibrary(USpineFuncLibrary&&); \
	NO_API USpineFuncLibrary(const USpineFuncLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineFuncLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineFuncLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpineFuncLibrary) \
	NO_API virtual ~USpineFuncLibrary();


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_27_PROLOG
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_SPARSE_DATA \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineFuncLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineFuncLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
