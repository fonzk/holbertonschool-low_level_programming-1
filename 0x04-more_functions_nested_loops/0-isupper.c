#include "holberton.h"

/**
 * _isupper - checks for uppercase letter
 * @c: integer to chck if upper
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
