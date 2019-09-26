#include "holberton.h"

/**
 * print_most_numbers - print all numbers but 2 and 4
 * Description: do not print 2 or 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
