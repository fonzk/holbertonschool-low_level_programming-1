#include "holberton.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to locate occurence of accept
 * @accept: bytes to match and find in s
 * Return: pointer to the byte in accept or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
