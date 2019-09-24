#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Descriptions: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char a;
	int count;

	for (count = 1; count < 11; count++)
	{
	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
