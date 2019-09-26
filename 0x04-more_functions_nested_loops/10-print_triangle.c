#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * size - size of triangle
 */
void print_triangle(int size)
{
	int x, y, spa;

	if (size <= 0)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			spa = size - x - 1;
			if (y < spa)
				_putchar(' ');
			else if (y >= spa)
				_putchar('#');
		}
		_putchar('\n');
	}
}
