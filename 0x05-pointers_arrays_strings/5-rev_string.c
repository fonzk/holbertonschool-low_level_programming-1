#include "holberton.h"

/**
 * rev_string - function that reverses a string
 *
 *
 *
 */
void rev_string(char *s)
{
	int count;
	count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	s--;
	while (count)
	{
		s--;
		count--;
	}

}
