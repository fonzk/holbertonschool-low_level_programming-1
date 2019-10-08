#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, d1, d2;

	i = 0;
	j = 0;
	d1 = 0;
	d2 = 0;

	while (i < size)
	{
		d1 += *(a + i);
		i++;
		a += size;
	}

	a -= size;
	while (j < size)
	{
		d2 += *(a + j);
		j++;
		a -= size;
	}
	printf("%d, %d\n", d1, d2);
}
