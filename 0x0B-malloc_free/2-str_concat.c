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
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int i, j;
	int s1len, s2len, s3len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);
	s3len = s1len + s2len;

	buffer = (char *)malloc((sizeof(char) * (s3len + 1)));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		buffer[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		buffer[i] = s2[j];

	buffer[i] = '\0';

	return(buffer);
}
