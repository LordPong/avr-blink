#define F_CPU 1000000UL

#include <avr/io.h>
#include <utils/delay.h>

int main(void)
{
	DDRB |= (1<<PB0);
	while(1)
	{
		PORTB ^= (1<<PB0);
		_delay_ms(1000);
	}
	return 0;
}
