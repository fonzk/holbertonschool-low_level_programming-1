#include "holberton.h"

/**
 * print_square - print square
 * @size: prints integer squared
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');

	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= size; x++)
			_putchar('#');
		_putchar('\n');
	}

}
