#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find the square root of
 * Return: square root of the number, -1 if no natural
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

/**
 * helper - function to find if there is a square root of a number
 * @n: number to find the square root of
 * @i: counter to divide
 * Return: square root if there is one, -1 otherwise
 */

int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}
