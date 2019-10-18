#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: smallest value
 * @max: largest value
 * Return: array of integers or NULL if fail
 */
int *array_range(int min, int max)
{
	int *buffer;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	buffer = malloc(sizeof(int) * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		buffer[i] = min + i;
	}

	return (buffer);
}
