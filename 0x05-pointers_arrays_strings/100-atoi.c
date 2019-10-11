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

       	while ((*s < '0' || *s > '9') && *s != 0)
       	{
       		if (*s == '-')
       			sign = -sign;
       		s++;
	}

       	while ((*s >= '0' && *s <= '9') && *s != 0)
       	{
       	     	if (value > 0)
       	       	{
       	       		value *= 10;
       	       		value += (*s - '0');
       	       		s++;
       	       	}
       	       	else
       	       	{
             		value *= 10;
       	       		value += (*s - '0');
       	       		s++;
       	       	}
       	}
	return (value * sign);
}
