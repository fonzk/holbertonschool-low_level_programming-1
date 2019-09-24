#include "holberton.h"

/**
 * print_last_digit - Input
 * @r: number to print last digit
 * Return: Absolute value if negative
 */
int print_last_digit(int r)
{
	int rlast;
	rlast = r % 10;
	r = r % 10;

	if (rlast < 0)
		rlast = rlast * -1;
			return (rlast);
			_putchar(rlast + '0');
			else if
				_putchar(r + '0');

	_putchar('\n');
}
