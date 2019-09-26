#include "holberton.h"

/**
 * _isdigit - checks to see if an integer is a digit
 * @c: digit to check
 * Return: 1 if successful, 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
