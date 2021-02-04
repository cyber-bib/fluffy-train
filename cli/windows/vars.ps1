$RootDir = ("${PSScriptRoot}" | Split-Path -Parent)
$RootDir = ("${RootDir}" | Split-Path -Parent)

$ProjectName = ("${RootDir}" | Split-Path -Leaf)
$BuildDir = "${RootDir}/build"
$SourceDir = "${RootDir}"

$SystemName = "windows"

# Write-Host "${ProjectName}"
# Write-Host "`troot: $RootDir"
# Write-Host "`tbuild: $BuildDir"
# Write-Host "`tsrc: $SourceDir"