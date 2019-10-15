#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: characters
 * Return: c
 */
char *create_array(unsigned int size, char c)
{

	char *buffer;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	do {
		*(buffer + i) = c;
		i++;

	} while (i < size);

	return (buffer);
}
