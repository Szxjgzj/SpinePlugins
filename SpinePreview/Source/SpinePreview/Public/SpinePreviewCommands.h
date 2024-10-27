// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SpinePreviewStyle.h"

class FSpinePreviewCommands : public TCommands<FSpinePreviewCommands>
{
public:

	FSpinePreviewCommands()
		: TCommands<FSpinePreviewCommands>(TEXT("SpinePreview"), NSLOCTEXT("Contexts", "SpinePreview", "SpinePreview Plugin"), NAME_None, FSpinePreviewStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
