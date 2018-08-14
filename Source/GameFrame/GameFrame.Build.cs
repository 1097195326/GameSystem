// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class GameFrame : ModuleRules
{
	public GameFrame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
/*
        PublicIncludePaths.AddRange(
        new string[] {
        "GameFrame/Public",
        "GameFrame/Public/AppCore/GameModes",
        "GameFrame/Public/AppCore/UserInterface"
        }
        );
        PrivateIncludePaths.AddRange(
        new string[] {
        "GameFrame/Private",
        "GameFrame/Private/AppCore/GameModes",
        "GameFrame/Private/AppCore/UserInterface"
        }
        );
*/
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
