#include "holberton.h"
/**
 * leet - converts letters to numbers
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (let[j])
		{
			if (let[j] == s[i])
			{
				s[i] = num[j];
			}
			j++;

		}
		i++;
	}
	return (s);
}
