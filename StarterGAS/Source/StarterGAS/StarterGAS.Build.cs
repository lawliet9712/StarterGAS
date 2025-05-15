// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StarterGAS : ModuleRules
{
	public StarterGAS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
