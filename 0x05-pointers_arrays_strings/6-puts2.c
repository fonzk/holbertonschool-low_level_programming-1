#include "holberton.h"

/**
 * puts2 - print every other character
 * @str: string of character
 */
void puts2(char *str)
{
	int counter;

	counter = 0;

	while (*str)
	{
		if (counter % 2 == 0)
			_putchar(*str);
		counter++;
		str++;
	}
	_putchar('\n');



}
