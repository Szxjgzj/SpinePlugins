// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineAtlasImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineAtlasImportFactory() {}
// Cross Module References
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAssetFactory();
	SPINEEDITORPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpineEditorPlugin();
// End Cross Module References
	void USpineAtlasAssetFactory::StaticRegisterNativesUSpineAtlasAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineAtlasAssetFactory);
	UClass* Z_Construct_UClass_USpineAtlasAssetFactory_NoRegister()
	{
		return USpineAtlasAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpineAtlasAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineAtlasAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineEditorPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// clang-format on\n" },
#endif
		{ "IncludePath", "SpineAtlasImportFactory.h" },
		{ "ModuleRelativePath", "Public/SpineAtlasImportFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "clang-format on" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineAtlasAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineAtlasAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineAtlasAssetFactory_Statics::ClassParams = {
		&USpineAtlasAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineAtlasAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpineAtlasAssetFactory()
	{
		if (!Z_Registration_Info_UClass_USpineAtlasAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineAtlasAssetFactory.OuterSingleton, Z_Construct_UClass_USpineAtlasAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineAtlasAssetFactory.OuterSingleton;
	}
	template<> SPINEEDITORPLUGIN_API UClass* StaticClass<USpineAtlasAssetFactory>()
	{
		return USpineAtlasAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineAtlasAssetFactory);
	USpineAtlasAssetFactory::~USpineAtlasAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineAtlasImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineAtlasImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineAtlasAssetFactory, USpineAtlasAssetFactory::StaticClass, TEXT("USpineAtlasAssetFactory"), &Z_Registration_Info_UClass_USpineAtlasAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineAtlasAssetFactory), 3191654092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineAtlasImportFactory_h_3171037194(TEXT("/Script/SpineEditorPlugin"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineAtlasImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePlugin_Source_SpineEditorPlugin_Public_SpineAtlasImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS