#include "holberton.h"
/**
 * rot13 - encode a string
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;
	char *string = s;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (*s)
	{
		while (*s != input[i] && input[i])
			i++;
		if (input[i])
			*s = output[i];
		s++;
		i = 0;
	}
	return (string);
}
