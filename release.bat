@echo off
mkdir release
cd release
mklink /H "boolean.h" "..\boolean.h"
mklink /H "boolean x86.dll" "..\cmake-build-minsizerel-x86\BooleanDll.dll"
mklink /H "boolean x86.lib" "..\cmake-build-minsizerel-x86\BooleanLib.lib"
mklink /H "boolean amd64.dll" "..\cmake-build-minsizerel-amd64\BooleanDll.dll"
mklink /H "boolean amd64.lib" "..\cmake-build-minsizerel-amd64\BooleanLib.lib"
cd ..