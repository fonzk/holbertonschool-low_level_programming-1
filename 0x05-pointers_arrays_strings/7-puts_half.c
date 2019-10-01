#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: length of string
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len / 2) + 1;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
