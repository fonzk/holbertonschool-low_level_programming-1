#include "holberton.h"

/**
 * print_sign - Entry to print sign
 * @n: number
 * Return: 1 if successful, -1 if negative, and 0 if 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
