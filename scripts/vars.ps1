$RootDir = ("${PSScriptRoot}" | Split-Path -Parent)

$ProjectName = ("${RootDir}" | Split-Path -Leaf)
$BuildDir = "${RootDir}/build"
$SourceDir = "${RootDir}"

# Write-Host "${ProjectName}"
# Write-Host "`troot: $RootDir"
# Write-Host "`tbuild: $BuildDir"
# Write-Host "`tsrc: $SourceDir"