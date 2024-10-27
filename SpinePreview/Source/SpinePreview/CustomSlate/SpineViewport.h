#pragma once
#include "SCommonEditorViewportToolbarBase.h"
#include "SEditorViewport.h"
#include "SpineAtlasAsset.h"
#include "SpineChar.h"
#include "SpineSkeletonDataAsset.h"

class FSpinePreviewClient : public FEditorViewportClient
{
public:
	explicit FSpinePreviewClient(FEditorModeTools* InModeTools, FPreviewScene* InPreviewScene, const TWeakPtr<SEditorViewport>& InEditorViewportWidget);
	

	virtual void Tick(float DeltaSeconds) override;
	virtual bool RequiresHitProxyStorage() override;
	virtual bool InputKey(const FInputKeyEventArgs& EventArgs) override;
	virtual void ProcessClick(FSceneView& View, HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX, uint32 HitY) override;
	virtual ~FSpinePreviewClient() override;

	void RefreshSpineActor(USpineAtlasAsset* Atlas,USpineSkeletonDataAsset* SkelData);
	
	void GetCurrentMouse();

	ASpineChar* SpineActor;
	FDelegateHandle DelegateHandle;
};

class SpineViewport : public SEditorViewport , public ICommonEditorViewportToolbarInfoProvider
{
public:
	SLATE_BEGIN_ARGS(SpineViewport) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	SpineViewport();
	virtual ~SpineViewport() override;


protected:
	/** SEditorViewport interface */

	virtual void OnFocusViewportToSelection() override;
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;

	//Toolbar Intetface
	virtual TSharedPtr<FExtender> GetExtenders() const override;
	virtual TSharedPtr<SWidget> MakeViewportToolbar() override;
	virtual void OnFloatingButtonClicked() override;
	virtual TSharedRef<SEditorViewport> GetViewportWidget() override;
	
private:
	TSharedPtr<class FPreviewScene> PreviewScene;
};
