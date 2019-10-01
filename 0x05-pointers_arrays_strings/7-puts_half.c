#include "holberton.h"

/**
 *
 *
 *
 *
 */
void puts_half(char *str)
{
	int counter;
	int newcounter;


	while (*str)
	{
		counter++;
		str++;
	}

	if (counter % 2 == 0)
		newcounter = counter / 2;
	else
		newcounter = (counter - 1) / 2;

	while (newcounter <= counter)
	{
		_putchar(*str);
		newcounter++;
		str++;
	}

	_putchar('\n');

}
