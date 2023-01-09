@echo off
mkdir bin
pushd bin

rem %cd% is current directory
rem set foo=%cd%, now foo is %cd%

rem %1 is command line argument. %1 to %9 can be used
g++ -fdiagnostics-color=always -g ../%1 -o main.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

if exist main.exe (
    echo Executable created in bin
) else (
    echo Couldn't compile
)
popd