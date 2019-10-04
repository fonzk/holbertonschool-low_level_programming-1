#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: source
 * @n: size
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;

	while (c < n && src[c])
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		dest++;
		c++;
	}
	return (dest);
}
