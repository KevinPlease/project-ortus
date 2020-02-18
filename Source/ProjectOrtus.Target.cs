

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectOrtusTarget : TargetRules
{
	public ProjectOrtusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjectOrtus" } );
	}
}
