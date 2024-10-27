#pragma once
#include "SpineFuncLibrary.h"
#include "SpinePreview.h"
#include "SpineSingleItem.h"
#include "SpineWindow.h"
#include "SpineData/CustomSpineData/SpineMeshFuncLibrary.h"

class SpineListTab : public SSpineTab
{
public:
	SLATE_BEGIN_ARGS(SpineListTab){}
		//SLATE_ATTRIBUTE(TSharedPtr<SSpineWindow>,SpineWindow)
	SLATE_END_ARGS()
public:

#if 1
	TArray<USpineAtlasAsset*> SpineAtlas;
	TArray<USpineSkeletonDataAsset**> SpineSkels;

	TSharedPtr<SOverlay> UpOverlayPtr;
	TSharedPtr<SOverlay> DownOverlayPtr;
	
	TSharedPtr<SImage> ImagePtr;
	TSharedPtr<SScrollBox> ScrollBoxPtr;
#endif
	
	void Construct(const FArguments& InArgs)
	{
		FSpinePreviewModule& SpinePreviewModule = FModuleManager::GetModuleChecked<FSpinePreviewModule>("SpinePreview");
		//SpineWindow = InArgs._SpineWindow.Get();
		
#if 1
		ChildSlot
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.FillHeight(1)
			[
				SAssignNew(UpOverlayPtr,SOverlay)
				+SOverlay::Slot()
				[
					SNew(SButton)
					.Text(FText::FromString("Loading"))
				]
			]
			+SVerticalBox::Slot()
			.FillHeight(1)
			[
				SNew(SBorder)
				.Padding(1,1)
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				[
					SNew(STextBlock)
					.Text(FText::FromString("Spine Data"))
				]
			]
			+SVerticalBox::Slot()
			.FillHeight(10)
			[
				SAssignNew(ScrollBoxPtr,SScrollBox)
			]
		];
#endif
		
		for (auto SpineMesh : SpinePreviewModule.SpineMeshs)
		{
			ScrollBoxPtr->AddSlot()
			[
				SNew(SOverlay)
				+SOverlay::Slot()
				.Padding(1,1)
				[
					SNew(SBorder)
					.Padding(2,2)
					.BorderBackgroundColor(FSlateColor(FLinearColor(1,1,1,0.5)))
					[
						SNew(SpineSingleItem)
						.ImgSource(SpineMesh->SpineAtlasAsset->atlasPages[0])
						.BtnName(FText::FromString(SpineMesh->SpineAtlasAsset->GetName()))
						.SpineMesh(SpineMesh)
					]
				]
				
			];
		}
	}

	virtual ~SpineListTab()
	{
		
		UE_LOG(LogTemp,Warning,TEXT("SpineListTab is Delete"));
	}

};
