
. "${PSScriptRoot}/vars.ps1"
cmake `
	-G "MinGW Makefiles" `
	-D "CMAKE_PROJECT_NAME=${ProjectName}" `
	-D "CMAKE_SYSTEM_NAME=${SystemName}" `
	-B "${BuildDir}" `
	-S "${SourceDir}"