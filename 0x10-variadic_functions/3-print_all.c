#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_ch - print char
 * @arg: string
 */
void print_ch(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}
/**
 * print_in - print int
 * @arg: string
 */

void print_in(va_list arg)
{
	int integer;

	integer = va_arg(arg, int);
	printf("%d", integer);
}
/**
 * print_fl - print float
 * @arg: string
 */

void print_fl(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}
/**
 * print_st - print string
 * @arg: string
 */

void print_st(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - function that prints anything
 * @format: format of your arguments
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j = 0;
	char *sep;

	sep = "";

	printall_t options[] = {
		{"c", print_ch},
		{"i", print_in},
		{"f", print_fl},
		{"s", print_st},
		{NULL, NULL}
	};

	va_start(arg, format);
	i = 0;
	j = 0;
	while (format && format[i])
	{
		j = 0;
		while (options[j].list)
		{
			if (*options[j].list == format[i])
			{
				printf("%s", sep);
				options[j].f(arg);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
