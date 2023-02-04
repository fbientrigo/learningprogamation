# Building C++ projects with mysys2, mingw64, g++ and cmake on Windows
This tutorial explains how to setup a development environment for building C++ projects using mysys2, mingw64, g++, and cmake on Windows.

Installing mysys2
First, download and install mysys2 from the official website: https://www.msys2.org/

Once installed, open the mysys2 shell and update the packages:

```
pacman -Syu
pacman -Su
```


Install git, mingw64 toolchain, and cmake:
```
pacman -S git
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-cmake
```

Adding to PATH
Add the following to your system's PATH environment variable:

```
C:\msys64\mingw64\bin
```

Testing the installation
In the mysys2 shell, run the following commands to check the versions of g++ and cmake, if it is in your PATH it should also run on PowerShell:

```
g++ --version
cmake --version
```

## Setting up Visual Studio Code
Install the following Visual Studio Code extensions:

The C/C++ for Visual Studio Code
CMake
CMake Tools
Create the file .vscode/settings.json with the following content:

```json
{
    "cmake.mingwSearchDirs": ["C:/msys64/mingw64/bin"],
    "cmake.generator": "MinGW Makefiles",
    "cmake.configureSettings": {
        "CMAKE_CXX_COMPILER": "C:/msys64/mingw64/bin/g++.exe",
        "CMAKE_C_COMPILER": "C:/msys64/mingw64/bin/gcc.exe",
        "CMAKE_MAKE_PROGRAM": "C:/msys64/mingw64/bin/mingw32-make.exe"
    }

}
```

Create the file .vscode/task.json with the following content:

```
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe build active file",
            "command": "C:\\msys64\\mingw64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "
```

## Linking errors
Lost 10 hours to this error, is about linking in the TEMP folder:
```
C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/12.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: cannot find @C:\Windows\TEMP\cc8gVtT7: Invalid argument

```

Run VSCode on administrator and it got fixed, alternativelly because I'm using my personal computer:


Try giving the user permission to access the TEMP folder or try a different location for the build folder.
```
icacls "C:\Windows\TEMP" /grant "Users:(OI)(CI)F"
```

