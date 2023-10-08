# Custom version of SDR++
Here is a customised version of SDR++ (https://github.com/AlexandreRouma/SDRPlusPlus) for my needs.

Additional features:
- When clicking with right mouse button on FFT spectrum, toggles the Hold line;


## Compiling (Windows)
Follow the instructions given here (https://github.com/AlexandreRouma/SDRPlusPlus), with exception for the installation of RtAudio that can be skipped, because it gives compilation issues.

Proceed in this way instead, by installing RtAudio as Vcpkg (https://vcpkg.io) package:
- After installation of Vcpkg, open command prompt:
```
cd  [directory where vcpkg has been installed]
vcpkg install rtaudio:x64-windows
```

In addition, in the various files "CMakeLists.txt", the path to the Photos installation directory need to be updated (I have installed it in `D:/Programmi/PothosSDR/`). Use find / replace in files (for example with Notepad++). 


## Other tweaks
I also make use of the advanced bookmark manager by Darau Blé but it is currently not in this repository to avoid duplication. Follow instructions here: https://github.com/darauble/bookmark_manager
