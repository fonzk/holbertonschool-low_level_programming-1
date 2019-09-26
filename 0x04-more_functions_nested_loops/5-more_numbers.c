#include "holberton.h"

/**
 * more_numbers - print numbers 0 to 14
 * Descriptions: Print 10 times
 */
void more_numbers(void)
{
	int i;
	int count;

	for (count = 1; count < 11; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
		}
		_putchar('\n');
	}
}
