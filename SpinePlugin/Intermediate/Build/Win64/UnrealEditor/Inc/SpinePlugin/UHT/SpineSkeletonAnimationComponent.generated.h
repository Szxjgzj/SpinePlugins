// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpineSkeletonAnimationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackEntry;
struct FSpineEvent;
#ifdef SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h
#error "SpineSkeletonAnimationComponent.generated.h already included, missing '#pragma once' in SpineSkeletonAnimationComponent.h"
#endif
#define SPINEPLUGIN_SpineSkeletonAnimationComponent_generated_h

#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpineEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SPINEPLUGIN_API UScriptStruct* StaticStruct<struct FSpineEvent>();

#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_70_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationStartDelegate, UTrackEntry* entry);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_71_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEventDelegate, UTrackEntry* entry, FSpineEvent evt);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_72_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationInterruptDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationInterruptDelegate, UTrackEntry* entry);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_73_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationCompleteDelegate, UTrackEntry* entry);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_74_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationEndDelegate, UTrackEntry* entry);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_75_DELEGATE \
SPINEPLUGIN_API void FSpineAnimationDisposeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpineAnimationDisposeDelegate, UTrackEntry* entry);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisValidAnimation); \
	DECLARE_FUNCTION(execgetAnimationDuration); \
	DECLARE_FUNCTION(execgetAnimationName); \
	DECLARE_FUNCTION(execSetMixDuration); \
	DECLARE_FUNCTION(execGetMixDuration); \
	DECLARE_FUNCTION(execSetMixTime); \
	DECLARE_FUNCTION(execGetMixTime); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTrackEnd); \
	DECLARE_FUNCTION(execGetTrackEnd); \
	DECLARE_FUNCTION(execSetTrackTime); \
	DECLARE_FUNCTION(execGetTrackTime); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execSetAnimationLast); \
	DECLARE_FUNCTION(execGetAnimationLast); \
	DECLARE_FUNCTION(execSetAnimationEnd); \
	DECLARE_FUNCTION(execGetAnimationEnd); \
	DECLARE_FUNCTION(execSetAnimationStart); \
	DECLARE_FUNCTION(execGetAnimationStart); \
	DECLARE_FUNCTION(execSetMixAttachmentThreshold); \
	DECLARE_FUNCTION(execGetMixAttachmentThreshold); \
	DECLARE_FUNCTION(execSetMixDrawOrderThreshold); \
	DECLARE_FUNCTION(execGetMixDrawOrderThreshold); \
	DECLARE_FUNCTION(execSetAlphaAttachmentThreshold); \
	DECLARE_FUNCTION(execGetAlphaAttachmentThreshold); \
	DECLARE_FUNCTION(execSetEventThreshold); \
	DECLARE_FUNCTION(execGetEventThreshold); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetTrackIndex);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackEntry(); \
	friend struct Z_Construct_UClass_UTrackEntry_Statics; \
public: \
	DECLARE_CLASS(UTrackEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UTrackEntry)


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackEntry(UTrackEntry&&); \
	NO_API UTrackEntry(const UTrackEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackEntry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTrackEntry) \
	NO_API virtual ~UTrackEntry();


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_77_PROLOG
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_INCLASS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class UTrackEntry>();

#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_SPARSE_DATA
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearTrack); \
	DECLARE_FUNCTION(execClearTracks); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execAddEmptyAnimation); \
	DECLARE_FUNCTION(execSetEmptyAnimation); \
	DECLARE_FUNCTION(execAddAnimation); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execSetAutoPlay);


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_ACCESSORS
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpineSkeletonAnimationComponent(); \
	friend struct Z_Construct_UClass_USpineSkeletonAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(USpineSkeletonAnimationComponent, USpineSkeletonComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpinePlugin"), NO_API) \
	DECLARE_SERIALIZER(USpineSkeletonAnimationComponent)


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpineSkeletonAnimationComponent(USpineSkeletonAnimationComponent&&); \
	NO_API USpineSkeletonAnimationComponent(const USpineSkeletonAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpineSkeletonAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpineSkeletonAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpineSkeletonAnimationComponent) \
	NO_API virtual ~USpineSkeletonAnimationComponent();


#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_239_PROLOG
#define FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_SPARSE_DATA \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_ACCESSORS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_INCLASS_NO_PURE_DECLS \
	FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPINEPLUGIN_API UClass* StaticClass<class USpineSkeletonAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineSkeletonAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
