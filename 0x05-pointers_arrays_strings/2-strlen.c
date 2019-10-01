#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @s: string
 * Return: string length i
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
