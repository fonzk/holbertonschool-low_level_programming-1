#include "holberton.h"

/**
 * print_numbers- entry point
 * Descriptions: print numbers 0 - 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');

}
