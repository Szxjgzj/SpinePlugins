#include "SpineViewport.h"

#include "AdvancedPreviewScene.h"
#include "AdvancedPreviewScene.h"
#include "EditorModeManager.h"
#include "SpineChar.h"
#include "SpinePreview.h"

FSpinePreviewClient::FSpinePreviewClient(FEditorModeTools* InModeTools, FPreviewScene* InPreviewScene,
                                         const TWeakPtr<SEditorViewport>& InEditorViewportWidget):FEditorViewportClient(nullptr,InPreviewScene,InEditorViewportWidget)
{
	FAdvancedPreviewScene* AdvancedPreviewScene = static_cast<FAdvancedPreviewScene*>(PreviewScene);
	
	//UClass* MyActorBP = LoadClass<AActor>(NULL, TEXT("Blueprint'/Game/NewBlueprint.NewBlueprint_C'"));
	SpineActor = AdvancedPreviewScene->GetWorld()->SpawnActor<ASpineChar>(ASpineChar::StaticClass());
	SpineActor->SpineRender->SetRelativeRotation(FRotator(0,-90.f,0));

	FSpinePreviewModule& SpinePreviewModule = FModuleManager::GetModuleChecked<FSpinePreviewModule>("SpinePreview");
	DelegateHandle = SpinePreviewModule.ModuleDelegate.AddRaw(this,&FSpinePreviewClient::RefreshSpineActor);

	
	SetViewLocation(FVector(-1000.f,0,500.f));
	AdvancedPreviewScene->SetFloorOffset(0.f);
	
}

void FSpinePreviewClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);
	PreviewScene->GetWorld()->Tick(LEVELTICK_All,DeltaSeconds);
}

bool FSpinePreviewClient::RequiresHitProxyStorage()
{
	return FEditorViewportClient::RequiresHitProxyStorage();
}

bool FSpinePreviewClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	return FEditorViewportClient::InputKey(EventArgs);
}

void FSpinePreviewClient::ProcessClick(FSceneView& View, HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX,
uint32 HitY)
{
	FEditorViewportClient::ProcessClick(View, HitProxy, Key, Event, HitX, HitY);
}

FSpinePreviewClient::~FSpinePreviewClient()
{
	FSpinePreviewModule* SpinePreviewModule = FModuleManager::GetModulePtr<FSpinePreviewModule>("SpinePreview");
	if (SpinePreviewModule)
	{
		SpinePreviewModule->ModuleDelegate.RemoveAll(this);
	}
}

void FSpinePreviewClient::RefreshSpineActor(USpineAtlasAsset* Atlas, USpineSkeletonDataAsset* SkelData)
{
	if (SpineActor)
	{
		if (Atlas && SkelData)
		{
			SpineActor->SpineAnimSMS->Atlas = Atlas;
			SpineActor->SpineAnimSMS->SkeletonData =  SkelData;
			
			UE_LOG(LogTemp,Warning,TEXT("SpineViewport %s"),*SpineActor->SpineAnimSMS->Atlas->GetName());
		}
	}
	
}

void FSpinePreviewClient::GetCurrentMouse()
{
}

void SpineViewport::Construct(const FArguments& InArgs)
{
	SEditorViewport::Construct(SEditorViewport::FArguments());
}

SpineViewport::SpineViewport()
{
}

SpineViewport::~SpineViewport()
{
	FSpinePreviewModule* SpinePreviewModule = FModuleManager::GetModulePtr<FSpinePreviewModule>("SpinePreview");
	if (SpinePreviewModule)
	{
		SpinePreviewModule->ModuleDelegate.RemoveAll(this);
	}
}

void SpineViewport::OnFocusViewportToSelection()
{
	SEditorViewport::OnFocusViewportToSelection();
}

TSharedRef<FEditorViewportClient> SpineViewport::MakeEditorViewportClient()
{
	FAdvancedPreviewScene::ConstructionValues ConstructionValues;
	ConstructionValues.LightBrightness = 4.0f;
	
	PreviewScene = MakeShareable(new FAdvancedPreviewScene(ConstructionValues));
	FEditorModeTools* ModeTool = new FEditorModeTools();
	//PreviewScene = MakeShareable(new FPreviewScene());
	
	TSharedPtr<FSpinePreviewClient> SpinePreviewClient =
		MakeShareable(new FSpinePreviewClient(ModeTool,PreviewScene.Get(),GetViewportWidget()));
	
	
	return SpinePreviewClient.ToSharedRef();
}

TSharedPtr<FExtender> SpineViewport::GetExtenders() const
{
	TSharedPtr<FExtender> Result(MakeShareable(new FExtender));
	return Result;
}

TSharedPtr<SWidget> SpineViewport::MakeViewportToolbar()
{
	return SNew(SCommonEditorViewportToolbarBase, SharedThis(this));
}

void SpineViewport::OnFloatingButtonClicked()
{
}

TSharedRef<SEditorViewport> SpineViewport::GetViewportWidget()
{
	return SharedThis(this);
}
