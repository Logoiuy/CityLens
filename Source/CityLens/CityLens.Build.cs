// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class CityLens : ModuleRules
{
	public CityLens(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AndroidNative" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });

		PrivateIncludePaths.Add("CityLens/Private/Android");	// might be unnecessary, but if it ain't broken, don't fix it

		string UPLPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);

    	AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(UPLPath, "IntentService_UPL.xml"));

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
