@echo off

rem Set commonly used paths
SET frameworkDir=..\LTMF.VR
SET f3Dir=%frameworkDir%\f
SET optDir=..\optional
SET optFDir=%optDir%\f

rem List of F3 directories to move to optional area
SET dirsToMove=(EandEcheck authorisedCrew cache casualtiesCap dynamicViewDistance groupJoin mapClickTeleport nametag removeBody setAISkill simplewoundingsystem zeus)

rem Validate that core folders exist
IF NOT EXIST %frameworkDir% EXIT /B
IF NOT EXIST %f3Dir% EXIT /B
IF NOT EXIST %optDir% mkdir %optDir%
IF NOT EXIST %optFDir% mkdir %optFDir%

rem Move entire unused F3 directories
rem FIXME For some reason this will not overwrite files,
rem so you're forced to delete everything in the optional/f dir
rem before running this script
FOR %%i IN %dirsToMove% DO IF EXIST %f3Dir%\%%i MOVE /Y %f3Dir%\%%i %optFDir%

rem Use powershell for text replacement in files?
