#include <avr/io.h>
#include <util/delay.h>

#define DELAY_TIME 1000

// Function prototypes
void funk(int a, int b, int c);

int main(void) {
    int dela = DELAY_TIME;

    while (1) {
        // put your main code here, to run repeatedly:
        funk(0, 0, 0);
        _delay_ms(dela);

        funk(0, 0, 1);
        _delay_ms(dela);

        funk(0, 1, 0);
        _delay_ms(dela);

        funk(0, 1, 1);
        _delay_ms(dela);

        funk(1, 0, 0);
        _delay_ms(dela);

        funk(1, 0, 1);
        _delay_ms(dela);

        funk(1, 1, 0);
        _delay_ms(dela);

        funk(1, 1, 1);
        _delay_ms(dela);
    }

    return 0;
}

void funk(int a, int b, int c) {
    int s = 0;
    int ca = 0;

    // Simulate digitalWrite
    // Set pin 5
    if (a) {
        // Simulate HIGH
        PORTD |= (1 << PD5);
    } else {
        // Simulate LOW
        PORTD &= ~(1 << PD5);
    }

    // Simulate digitalWrite
    // Set pin 4
    if (b) {
        // Simulate HIGH
        PORTD |= (1 << PD4);
    } else {
        // Simulate LOW
        PORTD &= ~(1 << PD4);
    }

    // Simulate digitalWrite
    // Set pin 3
    if (c) {
        // Simulate HIGH
        PORTD |= (1 << PD3);
    } else {
        // Simulate LOW
        PORTD &= ~(1 << PD3);
    }

    s = (!a && !b && c) || (!a && b && !c) || (a && !b && !c) || (a && b && c);
    ca = (a && b) || (a && !b && c) || (!a && b && c);

    // Simulate digitalWrite
    // Set pin 8
    if (s) {
        // Simulate HIGH
        PORTB |= (1 << PB0);
    } else {
        // Simulate LOW
        PORTB &= ~(1 << PB0);
    }

    // Simulate digitalWrite
    // Set pin 9
    if (ca) {
        // Simulate HIGH
        PORTB |= (1 << PB1);
    } else {
        // Simulate LOW
        PORTB &= ~(1 << PB1);
    }

    // Print results (equivalent of Serial.print)
    // Uncomment if you want to print to the terminal (console)
    // printf("\n%d%d%d    %d%d\n", a, b, c, s, ca);
}

// Arduino Uno pin configuration setup (equivalent of setup function)
void setup() {
    // Set pins as output
    DDRD |= (1 << DDD5) | (1 << DDD4) | (1 << DDD3);
    DDRB |= (1 << DDB0) | (1 << DDB1);
}