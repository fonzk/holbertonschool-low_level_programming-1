#include "holberton.h"

/**
 * print_last_digit - Input
 * @r: number to print last digit
 * Return: Absolute value if negative, last digit otherwise
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
	{
		_putchar(-r + '0');
		return (-r);
}
	else
		_putchar(r + '0');
	return (r);
}
