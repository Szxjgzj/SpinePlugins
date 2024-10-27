// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpineAtlasAsset.h"
#include "SpineSkeletonDataAsset.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpineMeshFuncLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SPINEDATA_API USpineMeshFuncLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void CreateSpineMeshDataEmpty();
	
	UFUNCTION()
	static USpineMesh* CreateSpineMeshData(USpineAtlasAsset* SpineAtlasAsset,USpineSkeletonDataAsset* SpineSkeletonDataAsset,const FString& AssetName);
	
	static FReply OnCreateSpineMeshData();
};
