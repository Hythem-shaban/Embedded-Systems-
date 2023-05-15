#include <avr/io.h>
#define F_CPU 10000000
#include <util/delay.h>
int main() {
    DDRB = 0xff;
    PORTB = 0xFF;
    while(1) {
        PORTB |= (1 << 0);               
        _delay_ms(100);
        PORTB &= ~(1 << 0);     
        _delay_ms(100); 
    }
}
