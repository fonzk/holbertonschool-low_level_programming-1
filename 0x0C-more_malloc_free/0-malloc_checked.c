#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of malloc
 * Return: pointer to malloc
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
