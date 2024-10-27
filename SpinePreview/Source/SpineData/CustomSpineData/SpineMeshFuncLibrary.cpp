// Fill out your copyright notice in the Description page of Project Settings.


#include "SpineMeshFuncLibrary.h"

#include "FileHelpers.h"
#include "SpineMesh.h"
#include "AssetRegistry/AssetRegistryModule.h"

void USpineMeshFuncLibrary::CreateSpineMeshDataEmpty()
{
	FString AssetName = FGuid::NewGuid().ToString();
	const FString PackageName = "/Game/" + AssetName;
	UPackage* Package = CreatePackage(*PackageName);
	
	USpineMesh* SpineMesh = NewObject<USpineMesh>(Package, *AssetName, EObjectFlags::RF_Public | RF_Standalone);

	FAssetRegistryModule::AssetCreated(SpineMesh);
	
	Package->SetDirtyFlag(true);
	//FEditorFileUtils::SaveDirtyPackages(false, false, true);
	if (SpineMesh)
	{
		UE_LOG(LogTemp,Warning,TEXT("%s"),*AssetName)
	}
}

USpineMesh* USpineMeshFuncLibrary::CreateSpineMeshData(USpineAtlasAsset* SpineAtlasAsset,USpineSkeletonDataAsset* SpineSkeletonDataAsset,const FString& _AssetName)
{
	if (SpineAtlasAsset && SpineSkeletonDataAsset)
	{
		FString AssetName = _AssetName + FGuid::NewGuid().ToString();
		const FString PackageName = "/Game/SpineMesh/"  + AssetName;
		UPackage* Package = CreatePackage(*PackageName);
	
		USpineMesh* SpineMesh = NewObject<USpineMesh>(Package, *AssetName, EObjectFlags::RF_Public | RF_Standalone);
	
		SpineMesh->SpineAtlasAsset = SpineAtlasAsset;
		SpineMesh->SpineSkelAsset = SpineSkeletonDataAsset;
	
		FAssetRegistryModule::AssetCreated(SpineMesh);
		
		Package->SetDirtyFlag(true);
		//FEditorFileUtils::SaveDirtyPackages(false, false, true);
		
		if (SpineMesh)
		{
			UE_LOG(LogTemp,Warning,TEXT("%s"),*AssetName)
		}
		return SpineMesh;
	}
	return nullptr;
	
}

FReply USpineMeshFuncLibrary::OnCreateSpineMeshData()
{
	CreateSpineMeshDataEmpty();
	return FReply::Handled();
}
