@echo off
mkdir release
cd release
mkdir amd64
mkdir x86
cd x86
mklink boolean.h "..\..\boolean.h"
mklink boolean.dll "..\..\cmake-build-minsizerel-x86\BooleanDll.dll"
mklink boolean.lib "..\..\cmake-build-minsizerel-x86\BooleanLib.lib"
cd ..\amd64
mklink boolean.h "..\..\boolean.h"
mklink boolean.dll "..\..\cmake-build-minsizerel-amd64\BooleanDll.dll"
mklink boolean.lib "..\..\cmake-build-minsizerel-amd64\BooleanLib.lib"