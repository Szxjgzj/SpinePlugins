// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineData/Public/SpineData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineData() {}
// Cross Module References
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMeshFactory();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMeshFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpineData();
// End Cross Module References
	void USpineMeshFactory::StaticRegisterNativesUSpineMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineMeshFactory);
	UClass* Z_Construct_UClass_USpineMeshFactory_NoRegister()
	{
		return USpineMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpineMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineData,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMeshFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpineData.h" },
		{ "ModuleRelativePath", "Public/SpineData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineMeshFactory_Statics::ClassParams = {
		&USpineMeshFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMeshFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineMeshFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpineMeshFactory()
	{
		if (!Z_Registration_Info_UClass_USpineMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineMeshFactory.OuterSingleton, Z_Construct_UClass_USpineMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineMeshFactory.OuterSingleton;
	}
	template<> SPINEDATA_API UClass* StaticClass<USpineMeshFactory>()
	{
		return USpineMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineMeshFactory);
	USpineMeshFactory::~USpineMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_Public_SpineData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_Public_SpineData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineMeshFactory, USpineMeshFactory::StaticClass, TEXT("USpineMeshFactory"), &Z_Registration_Info_UClass_USpineMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineMeshFactory), 1565079443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_Public_SpineData_h_595228145(TEXT("/Script/SpineData"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_Public_SpineData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_Public_SpineData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
