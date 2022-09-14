#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of jack Bauer,
 * starting from 00:00 to 23:59, min loop counts mins, while hr counts hr
 * and resests mins
 * Return 0
*/
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hrs_remainder;
	int min_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hrs_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hrs_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0')
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
