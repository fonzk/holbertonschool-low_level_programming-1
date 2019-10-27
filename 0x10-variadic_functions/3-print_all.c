#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *temp;

	va_start(arg, format);
	i = 0;
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(arg, double));
			break;
		case 's':
			temp = va_arg(arg, char *);
			if (temp != NULL)
			{
				printf("%s", temp);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's') &&
		    format[(i+1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
