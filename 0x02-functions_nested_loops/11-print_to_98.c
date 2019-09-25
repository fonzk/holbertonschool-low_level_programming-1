#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Print to 98
 * @n: number to print
 * Return: 0 if successful
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			printf("%i, ", n);
			else
				printf("%i", n);
		}
	}
	else if (n == 98)
	{
		printf("%i", n);
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			printf("%i, ", n);
			else
				printf("%i", n);
		}
	}
	printf("\n");
}
