#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer to string or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	char *buffer;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2) + 1;

	if (n >= length2)
		buffer = malloc((sizeof(*buffer) * (length1 + length2)));
	else
		buffer = malloc((sizeof(*buffer) * (length1 + n + 1)));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		buffer[i] = s1[i];

	for (j = 0; s2[j] && j < n; i++)
	{
		buffer[i] = s2[j];
		j++;
	}

	buffer[i] = '\0';
	return (buffer);
}
