# fluffy-train

## Prerequisites

1. Install gcc - [Windows](http://mingw-w64.org/doku.php) / [mingw-w64 32-bit/64-bit](http://mingw-w64.org/doku.php/download/mingw-builds)
	- **Setttings**
		|   Name       |    Value    |     Comment     |
		| :--------    | :---------: | --------------- |
		|  Version     | 8.1.0       |                 |
		|  Archtecture | i686/x86_64 | (32-bit/64-bit) |
		|  Threads     | posix       |                 |
		|  Exception   | sjsj        | sjsj seems to be broken |
		|  Version     | 0           |                 |

		**NOTE : Add to system path**
2. Install [Git](https://git-scm.com/downloads) - Windows ( [32-bit](https://github.com/git-for-windows/git/releases/download/v2.30.0.windows.2/Git-2.30.0.2-32-bit.exe) / [64-bit](https://github.com/git-for-windows/git/releases/download/v2.30.0.windows.2/Git-2.30.0.2-64-bit.exe) ) [ **NOTE : Add to system path** ]
3. Install [NodeJs](https://nodejs.org/en/) - Windows ( [32-bit](https://nodejs.org/dist/v14.15.4/node-v14.15.4-x86.msi) / [64-bit](https://nodejs.org/dist/v14.15.4/node-v14.15.4-x64.msi) ) [ **NOTE : Add to system path** ]
4. Install [Python3](https://www.python.org/downloads/) - Windows 10 ( [32-bit](https://www.python.org/ftp/python/3.9.1/python-3.9.1.exe) / [64-bit](https://www.python.org/ftp/python/3.9.1/python-3.9.1-amd64.exe) ) [ **NOTE : Add to system path** ]
5. Install [Electron Framework](https://www.electronjs.org/) - Just follow instruction from the website. It uses [NodeJs](https://nodejs.org/en/), make sure it is installed before proceeding. [ **NOTE : Add to system path** ]
6. Install [Emscripten](https://emscripten.org/docs/getting_started/downloads.html) - Clone [Git repo](https://github.com/emscripten-core/emsdk) follow [instructions](https://emscripten.org/docs/getting_started/downloads.html#emsdk-install-targets) to install latest version. [ **NOTE : Add to system path** ]
7. Install [CMake](https://cmake.org/download/) - Windows ( [32-bit](https://github.com/Kitware/CMake/releases/download/v3.19.4/cmake-3.19.4-win32-x86.msi) / [64-bit](https://github.com/Kitware/CMake/releases/download/v3.19.4/cmake-3.19.4-win64-x64.msi) )
[ **NOTE : Add to system path** ]
8. Install [Doxygen](https://www.doxygen.nl/download.html) - Windows ( [32-bit](https://doxygen.nl/files/doxygen-1.9.1-setup.exe) / [64-bit](https://doxygen.nl/files/doxygen-1.9.1-setup.exe) ). Follow [instructions](https://www.doxygen.nl/manual/install.html) on how to install dot (Graphviz) and all other optional packages. [ **NOTE : Add to system path** ]
9. Install [PowerShell](https://docs.microsoft.com/en-us/powershell/scripting/install/installing-powershell?view=powershell-7.1) - Windows ( [32-bit](https://github.com/PowerShell/PowerShell/releases/download/v7.1.1/PowerShell-7.1.1-win-x86.msi) / [64-bit](https://github.com/PowerShell/PowerShell/releases/download/v7.0.3/PowerShell-7.0.3-win-x64.msi) )
10. Run sanity checks - From powershell run the following commands to make sure everything is running correctly. No errors should be thrown
	> Powershell

		gcc --version
		git --version
		node --version
		python --version
		cmake --version
		doxygen --version

## Powershell scripts
- Run the following command to run cmake project, build and execute the runable programa. Best of luck!!!
	>Powershell

		./scripts/config-build-run.ps1