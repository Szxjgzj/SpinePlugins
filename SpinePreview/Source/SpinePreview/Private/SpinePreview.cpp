// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpinePreview.h"

#include "ObjectTools.h"
#include "SpinePreviewStyle.h"
#include "SpinePreviewCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/ObjectLibrary.h"
#include "SpinePreview/CustomSlate/SpineDetailTab.h"
#include "SpinePreview/CustomSlate/SpineListTab.h"
#include "SpinePreview/CustomSlate/SpineViewportTab.h"
#include "SpinePreview/CustomSlate/SpineWindow.h"

static const FName SpinePreviewTabName("SpinePreview");

#define LOCTEXT_NAMESPACE "FSpinePreviewModule"

void FSpinePreviewModule::StartupModule()
{
	FSpinePreviewStyle::Initialize();
	FSpinePreviewStyle::ReloadTextures();

	FSpinePreviewCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSpinePreviewCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FSpinePreviewModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FSpinePreviewModule::RegisterMenus));

	GetAllSpineAtlas(SpineAtlas);
	GetAllSpineSkels(SpineSkels);
	GetAllSpineMesh(SpineMeshs);
	
	InitLayout();
}

void FSpinePreviewModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FSpinePreviewStyle::Shutdown();

	FSpinePreviewCommands::Unregister();

	TArray<FName> ChildTabName = {"Tab1","Tab2","Tab3"};
	
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SpinePreviewTabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ChildTabName[0]);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ChildTabName[1]);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ChildTabName[2]);

	
	
}

void FSpinePreviewModule::PluginButtonClicked()
{
	
	
	SAssignNew(Window,SSpineWindow)
		.AutoCenter(EAutoCenter::PreferredWorkArea)
		.ClientSize(FVector2D(1280,720))
		.Title(FText::FromString("SpinePreview"));
    		
	Window->SetContent(TabManager->RestoreFrom(Layout.ToSharedRef(),Window).ToSharedRef());
	FSlateApplication::Get().AddWindow(Window.ToSharedRef());
	
}

void FSpinePreviewModule::InitLayout()
{
	ParentTab = SNew(SDockTab);
	TabManager = FGlobalTabmanager::Get()->NewTabManager(ParentTab.ToSharedRef());
	
	TArray<FName> ChildTabName = {"Tab1","Tab2","Tab3"};

	Layout =  FTabManager::NewLayout(TEXT("Layout_1"))
	->AddArea
	(
		FTabManager::NewPrimaryArea()
		->SetOrientation(Orient_Horizontal)
		->Split
		(
			FTabManager::NewStack()
			->AddTab(ChildTabName[0],ETabState::OpenedTab)
			->SetSizeCoefficient(0.3)
		)
		->Split
		(
		FTabManager::NewSplitter()
			->SetOrientation(Orient_Vertical)
			->SetSizeCoefficient(0.7)
			->Split
			(
				FTabManager::NewStack()
				->AddTab(ChildTabName[1],ETabState::OpenedTab)
				->SetSizeCoefficient(0.7)
			)
			->Split
			(
				FTabManager::NewStack()
				->AddTab(ChildTabName[2],ETabState::OpenedTab)
				->SetSizeCoefficient(0.3)
			)
		)
	);
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ChildTabName[0], FOnSpawnTab::CreateRaw(this, &FSpinePreviewModule::SpawnTab0))
	.SetDisplayName(LOCTEXT("111", "List"));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ChildTabName[1], FOnSpawnTab::CreateRaw(this, &FSpinePreviewModule::SpawnTab1))
	.SetDisplayName(LOCTEXT("222", "PreView"));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ChildTabName[2], FOnSpawnTab::CreateRaw(this, &FSpinePreviewModule::SpawnTab2))
	.SetDisplayName(LOCTEXT("333", "Detail"));
}

void FSpinePreviewModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FSpinePreviewCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FSpinePreviewCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

TSharedRef<SDockTab> FSpinePreviewModule::SpawnTab0(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedPtr<SpineListTab> SpineList;
	TSharedPtr<SDockTab> SpineTab = SNew(SDockTab)
		[
			SNew(SpineListTab)
			//.SpineWindow(Window.Get())
		];
	return SpineTab.ToSharedRef();
}
TSharedRef<SDockTab> FSpinePreviewModule::SpawnTab1(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedPtr<SDockTab> SpineTab = SNew(SDockTab)
		[
			SNew(SpineViewportTab)
		];
	return SpineTab.ToSharedRef();
}

TSharedRef<SDockTab> FSpinePreviewModule::SpawnTab2(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedPtr<SDockTab> SpineTab = SNew(SDockTab)
		[
			SNew(SpineDetailTab)
		];
	return SpineTab.ToSharedRef();
}

void FSpinePreviewModule::GetAllSpineMesh(TArray<USpineMesh*>& _SpineMeshes)
{

	FCoreDelegates::OnPostEngineInit.AddLambda
	([]()
	{
		TArray<FAssetData> AssetDatas;
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(USpineMesh::StaticClass(), false, false);
	if (objectLibrary)
	{
		objectLibrary->AddToRoot();
	}
	
	objectLibrary->LoadAssetDataFromPath(TEXT("/Game"));
	objectLibrary->GetAssetDataList(AssetDatas);

	
	TArray<UPackage*> Packages;
	TArray<UObject*> ObjectsToDelete;
	for(auto AssetData : AssetDatas)
	{
		Packages.Add(AssetData.GetPackage());
		ObjectsToDelete.Add(AssetData.GetAsset());
		UE_LOG(LogTemp,Warning,TEXT("BeDelete SpineMesh is %s"),*AssetData.GetAsset()->GetName());
	}
	ObjectTools::CleanupAfterSuccessfulDelete(Packages,false);
	});
	
	_SpineMeshes.Empty();
	
	UE_LOG(LogTemp,Warning,TEXT("SpineAtlas Num is %d"),SpineAtlas.Num());
	UE_LOG(LogTemp,Warning,TEXT("SpineSkels Num is %d"),SpineSkels.Num());

	for (int i = 0; i < SpineAtlas.Num(); ++i)
	{
		for (int j = 0; j < SpineSkels.Num(); ++j)
		{
			if (SpineSkels[j]->GetSkeletonDataNoDialog(SpineAtlas[i]->GetAtlas()))
			{
				FString AssetName = "SpM_"+ SpineSkels[j]->GetName() + "_";
				USpineMesh* SpineMesh = USpineMeshFuncLibrary::CreateSpineMeshData(SpineAtlas[i],SpineSkels[j],AssetName);
				_SpineMeshes.Add(SpineMesh);
				UE_LOG(LogTemp,Warning,TEXT("SpineMesh is %s"),*SpineMesh->GetName());
			}
		}
	}
}

void FSpinePreviewModule::GetAllSpineAtlas(TArray<USpineAtlasAsset*>& _SpineAtlas)
{
	_SpineAtlas.Empty();
	TArray<FAssetData> AssetDatas;
	AssetDatas = USpineFuncLibrary::GetAllSpineAtlasAsset();

	for (auto AssetData:AssetDatas)
	{
		if (USpineAtlasAsset* AtlasAsset = Cast<USpineAtlasAsset>(AssetData.GetAsset()))
		{
			_SpineAtlas.Add(AtlasAsset);
		}
	}
}

void FSpinePreviewModule::GetAllSpineSkels(TArray<USpineSkeletonDataAsset*>& _SpineSkels)
{
	_SpineSkels.Empty();
	TArray<FAssetData> AssetDatas;
	AssetDatas = USpineFuncLibrary::GetAllSpineSkeletonAsset();
	
	for (auto AssetData:AssetDatas)
	{
		if (USpineSkeletonDataAsset* SkelAsset = Cast<USpineSkeletonDataAsset>(AssetData.GetAsset()))
		{
			_SpineSkels.Add(SkelAsset);
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSpinePreviewModule, SpinePreview)