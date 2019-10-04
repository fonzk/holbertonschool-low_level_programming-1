#include "holberton.h"
/**
 * cap_string - change all words in a string to upper
 * @s: string to conver
 * Return: Converted string
 */
char *cap_string(char *s)
{
	int c;

	c = 0;

	while (s[c])
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			if (s[c - 1] == ' ' || s[c - 1] == '\t' ||
			    s[c - 1] == ',' || s[c - 1] == ';' ||
			    s[c - 1] == '.' || s[c - 1] == '!' ||
			    s[c - 1] == '?' || s[c - 1] == '"' ||
			    s[c - 1] == '(' || s[c - 1] == ')' ||
			    s[c - 1] == '{' || s[c - 1] == '}')
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
