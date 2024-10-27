// Fill out your copyright notice in the Description page of Project Settings.
#include "SpineFuncLibrary.h"

#include "ContentBrowserModule.h"
#include "FileHelpers.h"
#include "KismetCompilerModule.h"
#include "ObjectTools.h"
#include "SpineAtlasAsset.h"
#include "SpineChar.h"
#include "SpineSkeletonDataAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/SphereComponent.h"
#include "Engine/ObjectLibrary.h"
#include "Kismet2/KismetEditorUtilities.h"

TArray<FAssetData> USpineFuncLibrary::GetAllSpineAtlasAsset()
{
    TArray<FAssetData> SpineAtlasAsset;
	
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(USpineAtlasAsset::StaticClass(), false, GIsEditor);
    	if (objectLibrary)
    	{
    		objectLibrary->AddToRoot();
    	}
    	objectLibrary->LoadAssetDataFromPath(TEXT("/Game"));
    	objectLibrary->GetAssetDataList(SpineAtlasAsset);

	for (auto data : SpineAtlasAsset)
	{
		//UE_LOG(LogTemp,Warning,TEXT("SpineAtlas : %s"),*data.AssetName.ToString());
	}
	
	return SpineAtlasAsset;
}

TArray<FAssetData> USpineFuncLibrary::GetAllSpineSkeletonAsset()
{
	
	TArray<FAssetData> SpineSkeletonAsset;
	
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(USpineSkeletonDataAsset::StaticClass(), false, GIsEditor);
	if (objectLibrary)
	{
		objectLibrary->AddToRoot();
	}
	
	objectLibrary->LoadAssetDataFromPath(TEXT("/Game"));
	objectLibrary->GetAssetDataList(SpineSkeletonAsset);

	for (auto data : SpineSkeletonAsset)
	{
		//UE_LOG(LogTemp,Warning,TEXT("SpineSkel : %s"),*data.AssetName.ToString());
	}
	
	/*FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData;
	const UClass* Class = UStaticMesh::StaticClass();
	AssetRegistryModule.Get().GetAssetsByClass(Class->GetClassPathName(),AssetData);*/
	
	return SpineSkeletonAsset;
}

int32 USpineFuncLibrary::GetUsefulSpineAssetByPath(TArray<FAssetData>& _SkelData,TArray<FAssetData>& _Atlas)
{
	TArray<FAssetData> Skels = GetAllSpineSkeletonAsset();
	TArray<FAssetData> Atlas = GetAllSpineAtlasAsset();

	_SkelData.Empty();
	_Atlas.Empty();
	
	if (Skels.IsEmpty() || Atlas.IsEmpty())
	{
		return 0;
	}
	else
	{
		for(auto skel : Skels)
		{
			for(auto atla : Atlas)
			{
				//USpineAtlasAsset* SpineAtlas = Cast<USpineAtlasAsset>(atla.GetAsset());
				//USpineSkeletonDataAsset* SpineSkeletonData = Cast<USpineSkeletonDataAsset>(skel.GetAsset());
				if (skel.PackagePath == atla.PackagePath)
				{
					_SkelData.Add(skel);
					_Atlas.Add(atla);
				}
			}
		}
		return _SkelData.Num();
	}
}

int32 USpineFuncLibrary::GetUsefulSpineAssetByPair(TArray<FAssetData>& _SkelData, TArray<FAssetData>& _Atlas)
{
	TArray<FAssetData> Skels = GetAllSpineSkeletonAsset();
	TArray<FAssetData> Atlas = GetAllSpineAtlasAsset();

	_SkelData.Empty();
	_Atlas.Empty();
	
	if (Skels.IsEmpty() || Atlas.IsEmpty())
	{
		return 0;
	}
	else
	{
		for(auto skel : Skels)
		{
			for(auto atla : Atlas)
			{
				USpineAtlasAsset* SpineAtlas = Cast<USpineAtlasAsset>(atla.GetAsset());
				USpineSkeletonDataAsset* SpineSkeletonData = Cast<USpineSkeletonDataAsset>(skel.GetAsset());
				
				if (SpineSkeletonData->GetSkeletonDataNoDialog(SpineAtlas->GetAtlas()))
				{
					_SkelData.Add(skel);
					_Atlas.Add(atla);
				}
				
			}
		}
		return _SkelData.Num();
	}
}

bool USpineFuncLibrary::SaveCurrentSpineAsset(TSubclassOf<AActor> SpineCharClass,const FString& Name,USpineAtlasAsset* SpineAtlasAsset,USpineSkeletonDataAsset* SpineSkeletonDataAsset)
{
	if(!SpineAtlasAsset || !SpineSkeletonDataAsset || !SpineCharClass)
	{
		return false;
	}

	//FString AssetName = Name + "_Child";
	
	FString AssetName = Name + FGuid::NewGuid().ToString();
	
	const FString PackageName = "/Game/" + AssetName;
	
	UPackage* Package = CreatePackage(*PackageName);
	
	UBlueprint* Blueprint = FKismetEditorUtilities::CreateBlueprint(SpineCharClass, Package, FName(*AssetName),BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), FName("EditorActions"));
	
	
	if (ASpineChar* _ASpineChar = Cast<ASpineChar>(Blueprint->GeneratedClass->GetDefaultObject()))
	{
		ASpineChar* SpineChar = Cast<ASpineChar>(Blueprint->GeneratedClass->GetDefaultObject());
		
		SpineChar->SpineAnimSMS->Atlas = SpineAtlasAsset;
		SpineChar->SpineAnimSMS->SkeletonData = SpineSkeletonDataAsset;
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("Create AActor"));
		AActor* SpineChar = Cast<AActor>(Blueprint->GeneratedClass->GetDefaultObject());
		TArray<UActorComponent*> Components;

		USceneComponent* SceneComponent = NewObject<USceneComponent>();
		USpineAnimSMS* SpineAnimSms = NewObject<USpineAnimSMS>();
		USpineSkeletonRendererComponent* SpineSkeletonRenderer = NewObject<USpineSkeletonRendererComponent>();
		
		SpineAnimSms->SkeletonData = SpineSkeletonDataAsset;
		SpineAnimSms->Atlas = SpineAtlasAsset;
		
		SpineChar->SetRootComponent(SceneComponent);
		SpineSkeletonRenderer->SetupAttachment(SceneComponent);
		SpineSkeletonRenderer->SetRelativeLocation(FVector(0,0,0));
		
		Components.Add(SceneComponent);
		Components.Add(SpineAnimSms);
		Components.Add(SpineSkeletonRenderer);
		
		FKismetEditorUtilities::AddComponentsToBlueprint(Blueprint,Components);
	}
	
	FAssetRegistryModule::AssetCreated(Blueprint);
	UE_LOG(LogTemp,Warning,TEXT("Create SpineChar:%s"),*Blueprint->GeneratedClass->GetName());
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
        	
	Package->MarkPackageDirty();
	Package->SetDirtyFlag(true);
	FEditorFileUtils::SaveDirtyPackages(false, false, true);
	
	return true;
	
}

void USpineFuncLibrary::GetAllSubClassNames(TArray<UClass*>& SpineChars)
{
	TArray<FAssetData> SubClassAsset;
	TArray<FAssetData> SubClassAsset1;
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(UBlueprint::StaticClass(), false, GIsEditor);
	if (objectLibrary)
	{
		objectLibrary->AddToRoot();
	}
    	
	objectLibrary->LoadAssetDataFromPath(TEXT("/Game"));
	objectLibrary->GetAssetDataList(SubClassAsset);

	for (auto SubClasss : SubClassAsset)
	{
		UBlueprint* NewBlueprint = Cast<UBlueprint>(SubClasss.GetAsset());
		if (GetParentNativeClass(NewBlueprint->GeneratedClass) == ASpineChar::StaticClass() )
		{
			//UE_LOG(LogTemp,Warning,TEXT("This Bulrprint NativeParentClass:%s"),*GetParentNativeClass(NewBlueprint->GeneratedClass)->GetName());
			//UE_LOG(LogTemp,Warning,TEXT("This Bulrprint GeneratedClass:%s"),*NewBlueprint->GeneratedClass->GetName());
			SubClassAsset1.Add(SubClasss);
			//ASpineChar* SpineChar = Cast<ASpineChar>(NewBlueprint->GeneratedClass);
			SpineChars.Add(NewBlueprint->GeneratedClass);
		}
	}
	//UE_LOG(LogTemp,Warning,TEXT("BluePrintCount:%d"),SubClassAsset.Num());
	UE_LOG(LogTemp,Warning,TEXT("All SpineChar SubClass Count:%d"),SubClassAsset1.Num());
	
}

void USpineFuncLibrary::GetAllSpineDataTable(TArray<UDataTable*>& DataTables)
{
	TArray<FAssetData> DataTableAsset;
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(UDataTable::StaticClass(), false, GIsEditor);
	if (objectLibrary)
	{
		objectLibrary->AddToRoot();
	}
    	
	objectLibrary->LoadAssetDataFromPath(TEXT("/Game"));
	objectLibrary->GetAssetDataList(DataTableAsset);

	for (auto TableAsset: DataTableAsset)
	{
		UDataTable* NewDataTable = Cast<UDataTable>(TableAsset.GetAsset());
		if (NewDataTable && NewDataTable->RowStruct == FSpineInfo::StaticStruct())
		{
			DataTables.Add(NewDataTable);
		}
	}
}

bool USpineFuncLibrary::SaveToDataTable(UDataTable* DataTable, FName RowName, USpineAtlasAsset* AtlasAsset,
                                        USpineSkeletonDataAsset* SkeletonDataAsset)
{
	if (!AtlasAsset || !SkeletonDataAsset)
	{
		UE_LOG(LogTemp,Warning,TEXT("SpineAsset Has been Useful"));
		return false;
	}
	if (!DataTable)
	{
		FString DataTableName = "NewSpineData" + FGuid::NewGuid().ToString();
		const FString PackageName = "/Game/" + DataTableName;
		UPackage* Package = CreatePackage(*PackageName);
		UDataTable* NewDataTable = NewObject<UDataTable>(Package, *DataTableName, EObjectFlags::RF_Public | RF_Standalone);
		NewDataTable->RowStruct = FSpineInfo::StaticStruct();
		FAssetRegistryModule::AssetCreated(NewDataTable);
		NewDataTable->GetOutermost()->MarkPackageDirty();

		FSpineInfo* SpineInfo = new FSpineInfo();
		SpineInfo->AtlasAsset = AtlasAsset;
		SpineInfo->SkeletonDataAsset = SkeletonDataAsset;
		FName RowName = TEXT("Row_0");
		NewDataTable->AddRow(RowName,*SpineInfo);

		UE_LOG(LogTemp,Warning,TEXT("Save SpineAsset To %s"),*NewDataTable->GetName());
		return true;
	}

	if (DataTable->RowStruct != FSpineInfo::StaticStruct())
	{
		UE_LOG(LogTemp,Warning,TEXT("Please Use SpineInfo Row DataTable"));
		return false;
	}
	
	for (auto ARowName : DataTable->GetRowNames())
	{
		if (ARowName == RowName)
		{
			RowName = FName(*(RowName.ToString() + "_" + FGuid::NewGuid().ToString()));
			break;
		}
	}
	
	FSpineInfo* SpineInfo = new FSpineInfo();
	SpineInfo->AtlasAsset = AtlasAsset;
	SpineInfo->SkeletonDataAsset = SkeletonDataAsset;
	DataTable->AddRow(RowName,*SpineInfo);
	
	UE_LOG(LogTemp,Warning,TEXT("Save SpineAsset To %s"),*DataTable->GetName());
	return true;
}
