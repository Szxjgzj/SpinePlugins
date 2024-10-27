using UnrealBuildTool;

public class SpineData : ModuleRules
{
    public SpineData(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "AssetTools",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "SpinePreview",
                "SpinePlugin",
                "SpineEditorPlugin",
                "UnrealEd"
            }
        );
    }
}