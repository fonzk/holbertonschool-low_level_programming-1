#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int count;

	count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	s--;
	while (count)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');

}
