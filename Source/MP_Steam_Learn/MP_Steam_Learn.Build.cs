// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MP_Steam_Learn : ModuleRules
{
	public MP_Steam_Learn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "OnlineSubsystemSteam", "OnlineSubsystem" });
	}
}	
