#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n:number of integers passed to the function
 * @...: variable number of arguments
 * Return: string of lines
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i, args = 0;

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		args = va_arg(pn, int);

		if (separator == NULL)
			return;
		if (separator != NULL && i != n - 1)
			printf("%d, ", args);
		if (i == n - 1)
			printf("%d", args);
	}
	va_end(pn);
	printf("\n");
}
