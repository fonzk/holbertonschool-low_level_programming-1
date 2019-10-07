#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: character string
 * @c: character to find
 * Return: string or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
