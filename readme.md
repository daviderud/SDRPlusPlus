# SDR++ Davide's mod - Custom version of SDR++
Here is a customised version of SDR++ (https://github.com/AlexandreRouma/SDRPlusPlus) for my needs.

Additional features:
- When clicking with right mouse button on FFT spectrum, toggles the Hold line;

Key bindings:
With respect to the original hotkeys (https://github.com/AlexandreRouma/SDRPlusPlus/wiki/UI-Controls#main-ui):
- F6: Toggle waterfall.
- F5: Start/Stop.


## Compiling (Windows)
Follow the instructions given here (https://github.com/AlexandreRouma/SDRPlusPlus), with exception for the installation of RtAudio that can be skipped, because it gives compilation issues.

Proceed in this way instead, by installing RtAudio as Vcpkg (https://vcpkg.io) package:
- After installation of Vcpkg, open command prompt:
```
cd  [directory where vcpkg has been installed]
vcpkg install rtaudio:x64-windows
```

This is what I obtain after running the command
```
vcpkg list
```

```
fftw3:x64-windows                                 3.3.10#8            FFTW is a C subroutine library for computing the...
glfw3:x64-windows                                 3.3.8#2             GLFW is a free, Open Source, multi-platform libr...
rtaudio:x64-windows                               2021-11-16#2        A set of C++ classes that provide a common API f...
vcpkg-cmake-config:x64-windows                    2022-02-06#1
vcpkg-cmake:x64-windows                           2023-05-04
zstd:x64-windows                                  1.5.5               Zstandard - Fast real-time compression algorithm
```

In addition, in the various files "CMakeLists.txt", the path to the PothosSDR installation directory need to be updated (I have installed it in `D:/Programmi/PothosSDR/`). Use find / replace in files (for example with Notepad++). 


## Other tweaks
I also make use of the advanced bookmark manager by Darau Blé but it is currently not in this repository to avoid duplication. Follow instructions here: https://github.com/darauble/bookmark_manager
