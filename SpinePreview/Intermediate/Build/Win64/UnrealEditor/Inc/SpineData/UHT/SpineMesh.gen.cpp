// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpineData/CustomSpineData/SpineMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpineMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMesh();
	SPINEDATA_API UClass* Z_Construct_UClass_USpineMesh_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineAtlasAsset_NoRegister();
	SPINEPLUGIN_API UClass* Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpineData();
// End Cross Module References
	void USpineMesh::StaticRegisterNativesUSpineMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpineMesh);
	UClass* Z_Construct_UClass_USpineMesh_NoRegister()
	{
		return USpineMesh::StaticClass();
	}
	struct Z_Construct_UClass_USpineMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAtlasAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineAtlasAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineSkelAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpineSkelAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpineMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpineData,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomSpineData/SpineMesh.h" },
		{ "ModuleRelativePath", "CustomSpineData/SpineMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineAtlasAsset_MetaData[] = {
		{ "Category", "SpineMesh" },
		{ "ModuleRelativePath", "CustomSpineData/SpineMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineAtlasAsset = { "SpineAtlasAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineMesh, SpineAtlasAsset), Z_Construct_UClass_USpineAtlasAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineAtlasAsset_MetaData), Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineAtlasAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineSkelAsset_MetaData[] = {
		{ "Category", "SpineMesh" },
		{ "ModuleRelativePath", "CustomSpineData/SpineMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineSkelAsset = { "SpineSkelAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpineMesh, SpineSkelAsset), Z_Construct_UClass_USpineSkeletonDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineSkelAsset_MetaData), Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineSkelAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpineMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineAtlasAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpineMesh_Statics::NewProp_SpineSkelAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpineMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpineMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpineMesh_Statics::ClassParams = {
		&USpineMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpineMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_USpineMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpineMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpineMesh()
	{
		if (!Z_Registration_Info_UClass_USpineMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpineMesh.OuterSingleton, Z_Construct_UClass_USpineMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpineMesh.OuterSingleton;
	}
	template<> SPINEDATA_API UClass* StaticClass<USpineMesh>()
	{
		return USpineMesh::StaticClass();
	}
	USpineMesh::USpineMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpineMesh);
	USpineMesh::~USpineMesh() {}
	struct Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpineMesh, USpineMesh::StaticClass, TEXT("USpineMesh"), &Z_Registration_Info_UClass_USpineMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpineMesh), 1900025976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMesh_h_1870484713(TEXT("/Script/SpineData"),
		Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_P_53_b_Plugins_SpinePreview_Source_SpineData_CustomSpineData_SpineMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
