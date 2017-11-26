#define F_CPU 8000000UL		// set frequency (8000000Hz = 8MHz)

#include <avr/io.h>			// including default io library
#include <util/delay.h>		// including library for delay functions

int main(void)
{
	DDRB |= (1<<PD0);		// initialize PORTD0 as output
	while(1)
	{
		PORTD ^= (1<<PD0);	// toggle PORTD0
		_delay_ms(10000);	// delay for 1000ms
	}
	return 0;
}
