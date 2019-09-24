#include "holberton.h"

/**
 * jack_bauer - Entry point
 * Return: 0 if successful
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
			++minute;
		}
		++hour;
	}
}
