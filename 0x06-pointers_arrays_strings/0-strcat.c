#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: your final string
 * @src: your original string
 * Return: Original 2 strings put together
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}

	dest[c] = '\0';
	return (dest);
}
