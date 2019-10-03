#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: your final string
 * @src: your original string
 * @n: size
 * Return: Original 2 strings put together
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (d < n && src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
