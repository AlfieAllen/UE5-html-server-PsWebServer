// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestHttpServerProj : ModuleRules
{
	public TestHttpServerProj(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "PsWebServer" });
		
	}
}
