# NDK CMake Sample

A sample project of cross compiling native code to Android from Windows. CMake and Ninja are used.

The sample contains a shared library and an executable. It is not an Andoird application, but simply an executable that runs in shell.

## How to build

1. Prepare
    1. Install Visual Studio, Android NDK, and Ninja.
    1. Set environment variable `NDK_DIR` to the NDK directory with name the version number.
    1. Add the path to a Ninja executable to the environment variable `Path`.
    1. In `build-android.bat`, set `VCVARSALL_BAT` to the path to `vcvarsall.bat` under the Visual Studio installation directory.
1. Build
    1. At the root of this project, run `build-android.bat`.
1. Install
    1. Use `adb push` to push the built executable and shared library to a device directory, e.g. `/data/local`.
    1. Use `adb shell` to open a shell.
    1. Use `chmod 755` to add execution permision.
    1. Set a variable `LD_LIBRARY_PATH` to the path to the shared library, and then export the variable.
    1. Now the executable can run in the adb shell, and successfully use the shared library.
