#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integers, 0 if none
 */

int _atoi(char *s)
{
	int value = 0;
	int sign = 1;

       	do
	{
		if (*s == '-')
			sign = -sign;

		else if ((*s >= '0' && *s <= '9') && *s != 0)
		{
      	       		value *= 10;
       	       		value += (*s - '0');
		}
       	       	else if (value > 0)
       	       	{
			break;
       	       	}
       	}while (*s++);

	return (value * sign);
}
