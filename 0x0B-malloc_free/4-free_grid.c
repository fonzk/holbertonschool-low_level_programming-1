#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a grid
 * @grid: grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	do {
		free(grid[i]);
		i++;
	} while (i < height);

	free(grid);
}
