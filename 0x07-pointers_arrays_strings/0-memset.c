#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory byte
 * @b: constant byte
 * @n: first n bytes of memory area
 * Return: char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
