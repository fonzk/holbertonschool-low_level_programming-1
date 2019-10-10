#include "holberton.h"

/**
 * is_prime_number - function to check if number is a prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 4 || n % 2 == 0)
		return (0);
	return (helper(n, 2));
}

/**
 * helper - runs the checks to determine if it is a prime
 * @n: number to check
 * @i: counter
 * Return: 1 if prime, 0 otherwise
 */

int helper(int n, int i)
{
	if (n == i)
		return (1);
	if ((n % i) != 0)
		return (helper(n, i + 1));
	if ((n % i) == 0)
		return (0);
	if (n < i)
		return (0);
	else
		return (0);
}
