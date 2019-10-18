#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
		s[i] = b;

	return (s);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: byte size of elements in the array
 * Return: NULL if fail, pointer to malloc otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);

	_memset(buffer, 0, (nmemb * size));
	return (buffer);
}
