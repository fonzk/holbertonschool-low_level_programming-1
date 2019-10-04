#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements in an array to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;

		i++;
		n--;
	}
}
