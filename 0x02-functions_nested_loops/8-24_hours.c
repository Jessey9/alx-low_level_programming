#include "main.h"
/**
 * minute printer -  Prints every minute of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour <= 2; hour++)
	{
		for (minute = 0; minute <= 9; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

