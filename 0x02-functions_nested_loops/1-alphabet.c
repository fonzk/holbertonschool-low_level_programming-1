#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 * Descriptions: Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char a;

	for(a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
