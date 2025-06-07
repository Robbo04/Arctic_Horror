// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Arctic_Horror : ModuleRules
{
	public Arctic_Horror(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
