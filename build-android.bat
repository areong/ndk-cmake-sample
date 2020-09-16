mkdir build
cd build

set VCVARSALL_BAT="C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat"

if "%VCVARSALL_BAT_IS_CALLED%"=="" (
    REM Set Visual Studio variables at the first run.
    set VSCMD_DEBUG=1
    call %VCVARSALL_BAT% x64
    set VCVARSALL_BAT_IS_CALLED="TRUE"
)

REM Use CMake to generate a Ninja project.
cmake .. -G "Ninja" ^
    -DCMAKE_TOOLCHAIN_FILE=%NDK_DIR%\build\cmake\android.toolchain.cmake ^
    -DANDROID_ABI=arm64-v8a

REM Build with Ninja.
ninja

cd ..
