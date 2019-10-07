#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area source
 * @n: n bytes to copy
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
