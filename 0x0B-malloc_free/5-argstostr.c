#include <stdio.h>
#include <stdlib.h>
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
/**
 * _strcat - function that concatenates two strings.
 * @dest: your final string
 * @src: your original string
 * Return: Original 2 strings put together
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
		c++;

	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * argstostr - function that concatenates all
 * the arguments of your program
 * @ac: program
 * @av: arguments
 * Return: concatenated arguments in the program
 */
char *argstostr(int ac, char **av)
{
	char *buffer;
	int strlen, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		strlen = strlen + _strlen(av[i]) + 1;

	buffer = malloc(sizeof(char) * strlen);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strcat(buffer, av[i]);
		_strcat(buffer, "\n");
	}
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}
