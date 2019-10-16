#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to the 2-D array or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = malloc(sizeof(int *) * width);

	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array2d[i] = (int *)malloc(sizeof(int *) * height);

		if (array2d[i] == NULL)
		{
			for (x = 0; x < i; x++)
				free(array2d[x]);
			free(array2d);
				     return (NULL);
		}
	}

       	for (j = 0; j < height; j++)
	{
		for (y = 0; y < width; y++)
			array2d[j][y] = 0;
	}
		return (array2d);
}
