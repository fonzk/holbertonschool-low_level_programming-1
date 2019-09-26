#include "holberton.h"

/**
 * print_diagonal - entry point to print spaces and slashes
 * @n: integer through the function
 */
void print_diagonal(int n)
{
	int sla, spa;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (sla = 0; sla < n; sla++)
	{
		for (spa = 0; spa < sla; spa++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
