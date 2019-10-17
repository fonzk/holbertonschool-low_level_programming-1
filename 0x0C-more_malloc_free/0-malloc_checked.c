#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
