#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int counter;
	char *endp = s;
	char interim;

	while (*s)
	{
		counter++;
		s++;
	}
	s--;

	while (counter / 2)
	{
		interim = *endp;
		*endp = *s;
		*s = interim;

		endp++;
		counter--;
		s--;
	}
}
