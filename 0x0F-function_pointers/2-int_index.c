#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: number to compare
 * Return: counter if found, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
