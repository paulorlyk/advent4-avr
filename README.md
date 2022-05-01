# advent4-avr

Port of Colossal Cave Adventure game to AVR microcontroller.

Originally made for Arduino Mega 2560 board, but does not use Arduino IDE so can be easily build for custom hardware.

## Current MCU requirements
* ROM: 78+k
* RAM: 1600+B
* EEPROM: 1200+B
* 1xUART

## Install dependencies

```shell
sudo apt-get install cmake gcc-avr avr-libc avrdude
```

Optionally to connect:
```shell
sudo apt-get install minicom
```

## Build

```shell
mkdir build
cd build
cmake ..
make hex
```

This will generate *.hex files for MCU flesh and EEPROM as well as binary in ELF format. 

## Program

To program Arduino Mega 2560 board or it's clone:
```shell
make burn
```
This wil program flash and EEPROM, assuming that Arduino is connected to port /dev/tyUSB0 (see CMakeLists.txt).

Or directly with `avrdude`:

* flash:
```shell
avrdude -p m2560 -c wiring -b 115200 -P /dev/ttyUSB0 -v -F -D -V -U flash:w:cmake-build-debug-avr/atmega2560:a
```

* EEPROM:
```shell
avrdude -p m2560 -c wiring -b 115200 -P /dev/ttyUSB0 -v -F -D -V -U eeprom:w:cmake-build-debug-avr/atmega2560:a
```

* both:
```shell
avrdude -p m2560 -c wiring -b 115200 -P /dev/ttyUSB0 -v -F -D -V -U flash:w:cmake-build-debug-avr/atmega2560:a -U eeprom:w:cmake-build-debug-avr/atmega2560:a
```

## Connect
```shell
minicom -D /dev/ttyUSB0 -b 115200
```

## Enjoy!

### Credits
* Original game sources: https://github.com/troglobit/advent4
