// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GCore : ModuleRules
{
    public GCore(ReadOnlyTargetRules Target) : base(Target)
    {
        //PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicIncludePaths.AddRange(
            new string[] {
                "GCore/Public",
                "GCore/Public/BaseCore",
                "GCore/Public/GameCore",
                "GCore/Public/Interface",
                "GCore/Public/UI",
                "GCore/Public/Data",
                "GCore/Public/Manager"
                // ... add public include paths required here ...
            }
            );
                
        
        PrivateIncludePaths.AddRange(
            new string[] {
                "GCore/Private",
                "GCore/Private/BaseCore",
                "GCore/Private/GameCore",
                "GCore/Private/Interface",
                "GCore/Private/UI",
                "GCore/Private/Data",
                "GCore/Private/Manager"
                // ... add other private include paths required here ...
            }
            );
            
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",  "CoreUObject", "Engine","Slate", "SlateCore","UMG", "InputCore","JsonUtilities","Json","GXmlPlugins","HTTP","Networking"
                // ... add other public dependencies that you statically link with here ...
            }
            );
            
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                // ... add private dependencies that you statically link with here ...  
            }
            );
        
        
        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                
                // ... add any modules that your module loads dynamically here ...
            }
            );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "ShaderCore",
                "RenderCore",
                "RHI",
            }
        );
        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.Add("Launch");
        }
        PrivateIncludePathModuleNames.AddRange(
            new string[] {
                "ImageWrapper",
                 "TargetPlatform",
            }
        );

        if (Target.Type != TargetType.Server)
        {
            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "SlateRHIRenderer",
                }
            );

            DynamicallyLoadedModuleNames.AddRange(
                new string[] {
                    "ImageWrapper",
                }
            );
        };
    }
}
