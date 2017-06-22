# General notes, inspiration, etc

## Game controls
...

## Internal USB Hub
...

## Audio
Audio from the Raspberry Pi's PWM GPIO pin may be the simplest method for audio output, however it may be possible to
integrate a USB sound card into the SMPB board for better sound quality, and to keep the Pi's GPIO available for more exciting things.

## Screen
Going to see how things go with SMPBv0 using the following 3.5" TFT display from GearBest (with some modification to the controller board to run at 5v likely needed).
http://www.gearbest.com/development-boards/pp_29447.html

It is likely there are better sized displays with higher resolution, lower power requirements, easier interfacing with the Pi, but for now this guy is going to have to do.

## Case
Everything should fit neatly inside of a 1989 GameBoy ([DMG-01](https://en.wikipedia.org/wiki/Game_Boy)) shell.

## Power Management
[TP4056](https://dlnmh9ip6v2uc.cloudfront.net/datasheets/Prototyping/TP4056.pdf)

[A potential TP4056 charge controller](https://s-media-cache-ak0.pinimg.com/originals/99/e6/60/99e660eb23270c404301e76d8e796097.png).

## Cartridge SD Card adapter

The idea here is that a USB SD card reader will be fitted inside of a game cartridge, which in turn connects as a USB device
via a modified cartridge slot which is configured to act as a USB port connected to the Pi via a USB hub.

### Why not use the Pi's built in SD card reader?
The SD card reader built into the Pi will be used for the main OS & system files and not readily accessible to the user
without taking the SuperMegaPiBoy apart. The reasoning for adding an additional SD card reader is that games/other files can be stored on this second SD card and easily accessed from other devices.

Also nostalgia++ - no SD cartridge, no play.

### What will happen if this cartridge ends up in a GameBoy?
The GameBoy, cartridge or both devices will probably explode.. Maybe nothing will happen... Who knows?

* https://www.circuitsonline.net/forum/view/message/1826833
