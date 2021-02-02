
. "${PSScriptRoot}/vars.ps1"
cmake `
	-G "MinGW Makefiles" `
	-D "CMAKE_PROJECT_NAME=${ProjectName}" `
	-B "${BuildDir}" `
	-S "${SourceDir}"