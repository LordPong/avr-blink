#define F_CPU 1000000UL		// set frequency (1000000Hz = 1MHz)

#include <avr/io.h>			// including default io library
#include <util/delay.h>		// including library for delay functions

int main(void)
{
	DDRB |= (1<<PB0);		// initialize PORTB0 as output
	while(1)
	{
		PORTB ^= (1<<PB0);	// toggle PORTB0
		_delay_ms(1000);	// delay for 1000ms
	}
	return 0;
}
