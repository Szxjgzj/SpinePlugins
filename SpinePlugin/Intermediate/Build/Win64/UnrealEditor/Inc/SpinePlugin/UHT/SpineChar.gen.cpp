// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineChar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_ASpineChar();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_ASpineChar_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAnimSMS_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpinePlugin();
// End Cross Module References
	void ASpineChar::StaticRegisterNativesASpineChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpineChar);
	UClass* Z_Construct_UClass_ASpineChar_NoRegister()
	{
		return ASpineChar::StaticClass();
	}
	struct Z_Construct_UClass_ASpineChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAnimSMS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineAnimSMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpineChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SpinePlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpineChar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpineChar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpineChar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineAnimSMS_MetaData[] = {
		{ "Category", "SpineChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineAnimSMS = { "SpineAnimSMS", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpineChar, SpineAnimSMS), Z_Construct_UClass_USpineAnimSMS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineAnimSMS_MetaData), Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineAnimSMS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineRender_MetaData[] = {
		{ "Category", "SpineChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpineChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineRender = { "SpineRender", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpineChar, SpineRender), Z_Construct_UClass_USpineSkeletonRendererComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineRender_MetaData), Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineRender_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpineChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineAnimSMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpineChar_Statics::NewProp_SpineRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpineChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpineChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpineChar_Statics::ClassParams = {
		&ASpineChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpineChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpineChar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpineChar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpineChar()
	{
		if (!Z_Registration_Info_UClass_ASpineChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpineChar.OuterSingleton, Z_Construct_UClass_ASpineChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpineChar.OuterSingleton;
	}
	template<> SPINEPLUGIN_API UClass* StaticClass<ASpineChar>()
	{
		return ASpineChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpineChar);
	ASpineChar::~ASpineChar() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpineChar, ASpineChar::StaticClass, TEXT("ASpineChar"), &Z_Registration_Info_UClass_ASpineChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpineChar), 1838441857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineChar_h_640082957(TEXT("/Script/SpinePlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpinePlugin_Public_SpineChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
