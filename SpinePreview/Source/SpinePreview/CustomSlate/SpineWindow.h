#pragma once
#include "SpineAtlasAsset.h"
#include "SpinePreview.h"
#include "SpineSkeletonDataAsset.h"

class SSpineWindow : public SWindow
{
public:
	FString TestName = "TestSpineWindow";

	virtual ~SSpineWindow() override
	{
		UE_LOG(LogTemp,Warning,TEXT("SSpineWindow is Delete"));
	}
};

class SSpineTab : public SCompoundWidget
{
public:
	
};
