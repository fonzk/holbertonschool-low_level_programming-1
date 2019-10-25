#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of integers passed as arguments
 * @...: a variable number of arguments to pass in
 * Return: sum of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i, total = 0;

	va_start(number, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(number, int);
	}
	va_end(number);
	return (total);
}
