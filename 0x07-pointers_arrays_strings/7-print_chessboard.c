#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: character in the array string
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			if (j != 7)
				_putchar(a[i][j]);
			else
				_putchar('\n');
		}
		i++;
	}
}
