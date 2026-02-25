// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Climb : ModuleRules
{
	public Climb(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Climb",
			"Climb/Variant_Platforming",
			"Climb/Variant_Platforming/Animation",
			"Climb/Variant_Combat",
			"Climb/Variant_Combat/AI",
			"Climb/Variant_Combat/Animation",
			"Climb/Variant_Combat/Gameplay",
			"Climb/Variant_Combat/Interfaces",
			"Climb/Variant_Combat/UI",
			"Climb/Variant_SideScrolling",
			"Climb/Variant_SideScrolling/AI",
			"Climb/Variant_SideScrolling/Gameplay",
			"Climb/Variant_SideScrolling/Interfaces",
			"Climb/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
