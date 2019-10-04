#include "holberton.h"
/**
 * string_toupper - change any lower case to uppper
 * @s: string to conver
 * Return: Converted string
 */
char *string_toupper(char *s)
{
	int c;

	c = 0;

	while (s[c])
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
