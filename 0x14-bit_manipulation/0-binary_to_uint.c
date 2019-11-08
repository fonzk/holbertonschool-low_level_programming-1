#include "holberton.h"

/**
 * power - function to get power to two
 * @i: number to get powers of
 * Return: the converted number
 */
unsigned int power(int i)
{
	int count = 0;
	unsigned int sum = 1;

	while (count != i)
	{
		sum = sum * 2;
		count++;
	}
	return (sum);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or not all 0s and 1s
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int digits, hold;

	if (b == '\0')
		return (0);

	digits = 0;
	while (b[digits])
		digits++;

	num = 0;
	while (digits >= 0)
	{
		if (b[digits] != '0' && b[digits] != '1')
			return (0);
		hold = 0;
		if (b[digits] == '1')
			hold += power(num);


	}
	return (num);
}
