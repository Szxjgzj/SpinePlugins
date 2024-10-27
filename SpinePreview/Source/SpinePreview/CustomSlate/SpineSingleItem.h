#pragma once
#include "SpinePreview.h"
#include "Widgets/Layout/SScaleBox.h"

class SpineSingleItem : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SpineSingleItem)
	{}
		SLATE_ATTRIBUTE(FText,BtnName)
		SLATE_ATTRIBUTE(UTexture2D*,ImgSource)
		SLATE_ATTRIBUTE(USpineMesh*,SpineMesh)
	SLATE_END_ARGS()

	TSharedPtr<SCheckBox> CheckBox;
	USpineMesh* SpineMesh;
	
	void Construct(const FArguments& InArgs)
	{
		SpineMesh = InArgs._SpineMesh.Get();
		
		FSlateBrush* ItemBrush;
		if (InArgs._ImgSource.Get())
		{
			ItemBrush = new FSlateBrush();
			ItemBrush->SetResourceObject(InArgs._ImgSource.Get());
			ItemBrush->ImageSize.X = 150.f;
			ItemBrush->ImageSize.Y = 60.f;
			ItemBrush->DrawAs = ESlateBrushDrawType::Image;
		}
		
		ChildSlot
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(1)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SScaleBox)
				.OverrideScreenSize(FVector2D(100,100))
				[
					SAssignNew(CheckBox,SCheckBox)
					.IsChecked(false)
					.OnCheckStateChanged(FOnCheckStateChanged::CreateLambda([=](ECheckBoxState CheckBoxState)
					{
						switch (CheckBoxState)
						{
							case ECheckBoxState::Unchecked:
								UE_LOG(LogTemp,Warning,TEXT("Is UnSelect %s"),*InArgs._BtnName.Get().ToString());
								break;
							case ECheckBoxState::Checked:
								UE_LOG(LogTemp,Warning,TEXT("Is Select %s"),*InArgs._BtnName.Get().ToString());
								break;
							case ECheckBoxState::Undetermined:
								break;
						}
					}))
				]
			]
			+SHorizontalBox::Slot()
			.FillWidth(1)
			[
				SNew(SImage)
				.Image(ItemBrush)
			]
			+SHorizontalBox::Slot()
			.FillWidth(5)
			[
				SNew(SButton)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
					.Text(InArgs._BtnName.Get())
				]
				.OnClicked_Lambda([=,this]()
				{
					FSpinePreviewModule& SpinePreviewModule = FModuleManager::GetModuleChecked<FSpinePreviewModule>("SpinePreview");
					SpinePreviewModule.ModuleDelegate.Broadcast(SpineMesh->SpineAtlasAsset,SpineMesh->SpineSkelAsset);
					if (SpineMesh->SpineAtlasAsset && SpineMesh->SpineSkelAsset)
					{
						UE_LOG(LogTemp,Warning,TEXT("SpineMesh is %s"),*SpineMesh->GetName());
					}
					return FReply::Handled();
				})
			]
			
		];
	}
};
