#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a string
 * @to: string you are changing s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
