#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements
 * @a: array
 * @n: integer
 */
void print_array(int *a, int n)
{
	int count;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
