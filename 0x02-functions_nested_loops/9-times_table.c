#include "holberton.h"
/**
 * times_table - print times table 9x9
 * Descriptions: print out the times table
 * Return: no return
 */
void times_table(void)
{
	int col, row, prod;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			prod = col * row;

			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
					_putchar(' ');
			}
				if (prod < 10)
				{
					_putchar(prod + '0');
				}
				else
				{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
				}
			}	_putchar('\n');
		}
}
