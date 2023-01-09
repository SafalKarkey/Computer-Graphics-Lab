@echo off
pushd bin
if exist main.exe (
    main.exe
) else (
    echo Executable was not found
)
popd