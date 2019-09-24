#include "holberton.h"
/**
 * _abs - Enter value to find absolute value
 * @r: integer to compute
 * Return: 1 if successful, 0 otherwise
 */

int _abs(int r)
{

	if (r < 0)
		return (r * -1);
	else
		return (r);

}
