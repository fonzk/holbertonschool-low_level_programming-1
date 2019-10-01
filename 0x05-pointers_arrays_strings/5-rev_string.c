#include "holberton.h"
/**
 * rev_string - print in reverse
 * @s: string
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

	counter = counter / 2;

	while (counter > 0)
	{
		interim = *endp;
		*endp = *s;
		*s = interim;

		endp++;
		counter--;
		s--;
	}

}
