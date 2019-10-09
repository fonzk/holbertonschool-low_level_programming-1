#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number to find the factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (factorial(n - 1) * n);

}
