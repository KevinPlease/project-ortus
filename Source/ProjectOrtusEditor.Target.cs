

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjectOrtusEditorTarget : TargetRules
{
	public ProjectOrtusEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjectOrtus" } );
	}
}
