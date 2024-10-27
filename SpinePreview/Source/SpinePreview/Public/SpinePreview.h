// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SpineData/CustomSpineData/SpineMesh.h"
#include "SpinePreview/CustomSlate/SpineWindow.h"

class FToolBarBuilder;
class FMenuBuilder;

DECLARE_MULTICAST_DELEGATE_TwoParams(FModuleDelegate,USpineAtlasAsset* Atlas,USpineSkeletonDataAsset* SkelData);

class FSpinePreviewModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/** This function will be bound to Command.*/
	void PluginButtonClicked();
	void InitLayout();
private:
	void RegisterMenus();
public:
	TSharedPtr<class FUICommandList> PluginCommands;
	TSharedRef<class SDockTab> SpawnTab0(const class FSpawnTabArgs& SpawnTabArgs);
	TSharedRef<class SDockTab> SpawnTab1(const class FSpawnTabArgs& SpawnTabArgs);
	TSharedRef<class SDockTab> SpawnTab2(const class FSpawnTabArgs& SpawnTabArgs);
	
	TSharedPtr<SDockTab> ParentTab;
	TSharedPtr<FTabManager> TabManager;
	TSharedPtr<SWindow> Window;
	TSharedPtr<FTabManager::FLayout> Layout;

	TArray<USpineMesh*> SpineMeshs;
	TArray<USpineAtlasAsset*> SpineAtlas;
	TArray<USpineSkeletonDataAsset*> SpineSkels;
	
	void GetAllSpineMesh(TArray<USpineMesh*>& SpineMeshes);
	void GetAllSpineAtlas(TArray<USpineAtlasAsset*>& SpineAtlas);
	void GetAllSpineSkels(TArray<USpineSkeletonDataAsset*>& SpineSkels);
	
	FModuleDelegate ModuleDelegate;
};
