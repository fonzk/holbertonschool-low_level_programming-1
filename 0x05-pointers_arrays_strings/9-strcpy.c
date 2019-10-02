#include "holberton.h"

/**
 * _strcpy - copy a string to a new destination
 * @dest: destination of copied string
 * @src: string to copy
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);

}
