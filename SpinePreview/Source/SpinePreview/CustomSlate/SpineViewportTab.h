#pragma once
#include "SpinePreview.h"
#include "SpineViewport.h"
#include "SpineWindow.h"

class SpineViewportTab : public SSpineTab
{
public:
	SLATE_BEGIN_ARGS(SpineViewportTab)
	{}
	SLATE_END_ARGS()

	FDelegateHandle DelegateHandle;
	void Construct(const FArguments& InArgs)
	{
		
		
		ChildSlot
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(1)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
			]
			+SHorizontalBox::Slot()
			.FillWidth(10)
			[
				SNew(SpineViewport)
			]
		];
	}

	virtual ~SpineViewportTab()
	{
		
	}
};
