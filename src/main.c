#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include <stdio.h>
#include <stdlib.h>

#include "types.h"
#include "uart0.h"
#include "adventure.h"
#include "utils.h"

#define LED_DDR     DDRB
#define LED_PORT    PORTB
#define LED_MASK    (1U << PB7)

#define USART0_SPEED 115200

static int _uart_putchar(char c, FILE *stream) {
    UNUSED(stream);

    if(c == '\n')
        uart0_put('\r');

    uart0_put(c);

    return 0;
}

static int _uart_getchar(FILE *stream) {
    UNUSED(stream);

    SET_MASK(LED_PORT, LED_MASK);
    char ch =uart0_get();
    CLEAR_MASK(LED_PORT, LED_MASK);

    if(ch == '\r')
        ch = '\n';

    _uart_putchar(ch, stream);

    return ch;
}

static void _setup() {
    // Set up status LED
    CLEAR_MASK(LED_PORT, LED_MASK);
    SET_MASK(LED_DDR, LED_MASK);

    uart0_init(USART0_SPEED);

    sei();

    static FILE _stdin = FDEV_SETUP_STREAM(NULL, _uart_getchar, _FDEV_SETUP_READ);
    static FILE _stdout = FDEV_SETUP_STREAM(_uart_putchar, NULL, _FDEV_SETUP_WRITE);
    static FILE _stderr = FDEV_SETUP_STREAM(_uart_putchar, NULL, _FDEV_SETUP_WRITE);

    stdin = &_stdin;
    stdout = &_stdout;
    stderr = &_stderr;
}

int main() {
    _setup();

    puts_P(PSTR(
        "================================ ADVENT4 AVR ================================\n"
        "* Use in-game save/load commands to store your progress to EEPROM\n"
        "   Ported by Paul Orlyk\n"
        "============================================================================="
    ));

    advent_main(false);

    reset_mcu();

    return 0;
}
