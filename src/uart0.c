//
// Created by palulukan on 5/1/22.
//

#include "uart0.h"

#include <avr/io.h>
#include <avr/interrupt.h>

#include <string.h>

#include "types.h"
#include "ring_buf.h"

#define BAUD_RATE(speed) (uint16_t)(((float)F_CPU / (16.0f * (speed))) - 0.5f)

#define BUF_SIZE 16

static struct {
    char rx_buf[BUF_SIZE];
    char tx_buf[BUF_SIZE];
    ringbuf rx;
    ringbuf tx;
} _uart0_state;

ISR(USART0_RX_vect) {
    // Ignore overflows...
    rb_put(&_uart0_state.rx, UDR0);
};

ISR(USART0_UDRE_vect) {
    int res = rb_get(&_uart0_state.tx);
    if(res < 0)
        CLEAR_MASK(UCSR0B, 1U << UDRIE0);
    else
        UDR0 = LOW(res);
};


void uart0_init(long int baudRate) {
    memset(&_uart0_state, 0, sizeof(_uart0_state));

    rb_init(&_uart0_state.rx, _uart0_state.rx_buf, sizeof(_uart0_state.rx_buf));
    rb_init(&_uart0_state.tx, _uart0_state.tx_buf, sizeof(_uart0_state.tx_buf));

    // Power on USART0
    CLEAR_MASK(PRR0, 1U << PRUSART0);
    // Disable baud rate doubling amd multi processor communication mode
    CLEAR_MASK(UCSR0A, (1U << U2X0) | (1U << MPCM0));
    // Enable Tx and Rx in async mode with no parity, 1 stop bit and 8 data bits
    UBRR0 = BAUD_RATE(baudRate);
    UCSR0C = (1U << UCSZ00) | (1U << UCSZ01);
    UCSR0B = (1U << RXEN0) | (1U << TXEN0) | (1U << RXCIE0);
}

void uart0_put(char c) {
    for(bool res = false; !res;) {
        CLEAR_MASK(UCSR0B, 1U << UDRIE0);
        res = rb_put(&_uart0_state.tx, c);
        SET_MASK(UCSR0B, 1U << UDRIE0);
    }
}

char uart0_get() {
    int res = -1;
    do {
        CLEAR_MASK(UCSR0B, 1U << RXCIE0);
        res = rb_get(&_uart0_state.rx);
        SET_MASK(UCSR0B, 1U << RXCIE0);
    } while(res < 0);

    return LOW(res);
}
