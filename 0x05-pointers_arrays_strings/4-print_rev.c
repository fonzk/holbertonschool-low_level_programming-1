#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int counter;

	counter = 0;

	while (*s)
	{
		counter++;
		s++;
	}
	s--;
	while (counter)
	{
		_putchar(*s);
		s--;
		counter--;
	}
	_putchar('\n');
}
