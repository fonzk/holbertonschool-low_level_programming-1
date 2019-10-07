#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: the string to look for in s
 * Return: length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int counter = 0;

	while (s[i])
	{
		if (counter != i)
			break;
		for (j = 0; accept[j]; j++)
		{
if (s[i] == accept[j])
			    counter++;
		}
			i++;
	}
	return (counter);
}
