@echo off
mkdir bin
pushd bin
g++ -fdiagnostics-color=always -g ../main.cpp -o main.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
popd