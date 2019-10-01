#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string of characters
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
