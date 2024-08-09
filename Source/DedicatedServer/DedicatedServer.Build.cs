// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DedicatedServer : ModuleRules
{
	public DedicatedServer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
