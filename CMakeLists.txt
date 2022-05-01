cmake_minimum_required(VERSION 3.19)
project(atmega2560 CXX C)

set(CMAKE_C_COMPILER "avr-gcc")
set(CMAKE_CXX_COMPILER "avr-g++")

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#set(CMAKE_VERBOSE_MAKEFILE ON)

set(TARGET_CPU ATmega2560)
set(F_CPU 16000000)
set(AVR_DUDE_PORT /dev/ttyUSB0)

set(AVR_DUDE_EXECUTABLE /usr/bin/avrdude)
set(FLASH_VERBOSE_FLAG "-v")

include_directories(src)

add_compile_definitions("__AVR_${TARGET_CPU}__")
add_compile_definitions("F_CPU=${F_CPU}L")

string(TOLOWER ${TARGET_CPU} TARGET_MCU)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Os -Wall -Wextra -flto -mmcu=${TARGET_MCU}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Os -Wall -Wextra -fno-exceptions -fno-threadsafe-statics -flto -mmcu=${TARGET_MCU}")

add_link_options(-Wl,--print-memory-usage)

add_executable(${PROJECT_NAME}
        src/types.h
        src/main.c
        src/ring_buf.h
        src/ring_buf.c
        src/utils.h
        src/utils.c
        src/uart0.h
        src/uart0.c
        src/adventure.h
        src/advent4/advent.c
        src/advent4/database.c
        src/advent4/turn.c
        src/advent4/english.c
        src/advent4/itverb.c
        src/advent4/verb.c
        )

add_custom_command(OUTPUT ${PROJECT_NAME}.hex
        DEPENDS ${PROJECT_NAME}
        COMMAND avr-objcopy -O ihex -R .eeprom  ${PROJECT_NAME} ${PROJECT_NAME}.hex
        COMMAND avr-objcopy -O ihex -j .eeprom  --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 ${PROJECT_NAME} ${PROJECT_NAME}.eeprom.hex)

add_custom_target(hex
        :
        DEPENDS ${PROJECT_NAME}.hex
        COMMENT "Generate HEX files")

add_custom_target(burn
        ${AVR_DUDE_EXECUTABLE} -p ${TARGET_CPU} -c wiring -b115200 -P ${AVR_DUDE_PORT} ${FLASH_VERBOSE_FLAG} -D -U flash:w:${PROJECT_BINARY_DIR}/${PROJECT_NAME}:a -U eeprom:w:${PROJECT_BINARY_DIR}/${PROJECT_NAME}:a
        DEPENDS ${PROJECT_NAME}
        COMMENT "Flash to ${TARGET_CPU}")
