# SDR++ Davide's mod - Custom version of SDR++
Here is a customised version of SDR++ (https://github.com/AlexandreRouma/SDRPlusPlus) for my needs.

Additional features:
- When clicking with right mouse button on FFT spectrum, toggles the Hold line (checkbox management to be added);
- Bookmarks manager (https://github.com/darauble/bookmark_manager) in place of the standard Frequency Manager;
- SSB (USB and LSB) max bandwidth 24 kHz in place of 12 kHz (from https://github.com/ericek111/SDRPlusPlus/tree/om2lt);
- Sliders operating with mouse wheel (from https://github.com/qrp73/SDRPP/);

Key bindings:
With respect to the original hotkeys (https://github.com/AlexandreRouma/SDRPlusPlus/wiki/UI-Controls#main-ui):
- F6: Toggle waterfall.
- F5: Start/Stop.

## Binaries

Get them from here: https://github.com/daviderud/SDRPlusPlus/releases/tag/nightly
The binaries include the compiled bookmarks manager module.

## Compiling
The bookmarks manager (https://github.com/darauble/bookmark_manager) is not included in the source code here. 

Perform this command in the folder /SDRPlusPlus/misc_modules/:

git clone https://github.com/darauble/bookmark_manager

Follow the instructions given here (https://github.com/AlexandreRouma/SDRPlusPlus)

