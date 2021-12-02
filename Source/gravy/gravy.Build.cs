// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class gravy : ModuleRules
{
	public gravy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
