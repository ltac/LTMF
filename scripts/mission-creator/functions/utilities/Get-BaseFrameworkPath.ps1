<#
 # .Synopsis
 # Finds and returns the folder of the base LTMF.Altis mission
 #
 # .Description
 # Finds and returns the folder of the base LTMF.Altis mission
 #
 # .Outputs
 # 		[System.String] The absolute path to the LTMF.Altis mission folder
 #>
function Get-BaseFrameworkPath {
	Join-Path (Get-RepoPath) "LTMF.Altis" -resolve
}