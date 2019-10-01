#include "holberton.h"

/**
 * swap_int - swap value of 2 integers
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int interim;

	interim = *a;
	*a = *b;
	*b = interim;
}
