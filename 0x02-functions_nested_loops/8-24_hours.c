#include "holberton.h"

/**
 * jack_bauer - entry point
 * Return: 0 if successful
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
       		while (minute < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			++minute;
		}
		++hour;
	}
}
