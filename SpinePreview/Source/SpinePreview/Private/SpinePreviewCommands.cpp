// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpinePreviewCommands.h"

#define LOCTEXT_NAMESPACE "FSpinePreviewModule"

void FSpinePreviewCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "SpinePreview", "Execute SpinePreview action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
