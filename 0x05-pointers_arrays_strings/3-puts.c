#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string of characters
 */
void _puts(char *str)
{
	int counter;

	counter = 0;

	while (*str)
	{
		counter++;
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
