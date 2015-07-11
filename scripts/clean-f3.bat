@echo off

rem Set commonly used paths
frameworkDir = "..\LTMF.Altis"
f3Dir = "%frameworkDir%\f"
optDir = "..\optional"

rem Validate that core folders exist
IF NOT EXIST %frameworkDir% EXIT /B
IF NOT EXIST %f3Dir% EXIT /B

rem Move entire unused F3 directories
IF EXIST %f3Dir%\EandEcheck MOVE %f3Dir%\EandEcheck %optDir%
IF EXIST %f3Dir%\authorisedCrew MOVE %f3Dir%\authorisedCrew %optDir%
IF EXIST %f3Dir%\cache MOVE %f3Dir%\cache %optDir%
IF EXIST %f3Dir%\casualtiesCap MOVE %f3Dir%\casualtiesCap %optDir%
IF EXIST %f3Dir%\mapClickTeleport MOVE %f3Dir%\mapClickTeleport %optDir%
IF EXIST %f3Dir%\nametag MOVE %f3Dir%\nametag %optDir%
IF EXIST %f3Dir%\removeBody MOVE %f3Dir%\removeBody %optDir%
IF EXIST %f3Dir%\setAISkill MOVE %f3Dir%\setAISkill %optDir%
IF EXIST %f3Dir%\simplewoundingsystem MOVE %f3Dir%\simplewoundingsystem %optDir%

rem Use powershell for text replacement in files