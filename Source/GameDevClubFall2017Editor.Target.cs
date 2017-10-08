// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GameDevClubFall2017EditorTarget : TargetRules
{
	public GameDevClubFall2017EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "GameDevClubFall2017" } );
	}
}
