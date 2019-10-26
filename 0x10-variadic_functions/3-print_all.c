#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: format of your arguments
 */
void print_all(const char * const format, ...)
{
	va_list buffer;
	int i = 0;
	char *temp;

	va_start(buffer, format);
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
				printf("%c", (char)va_arg(buffer, int));
				break;
			case 'i':
				printf("%d", va_arg(buffer, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(buffer, double));
				break;
			case 's':
				temp = va_arg(buffer, char *);
				if (temp == NULL)
				{
					printf("(nil)");
					return;
				}
				printf("%s", temp);
				break;
			}
			if ((format[i + 1] != '\0' ) && (format[i] == 'c' ||
						     format[i] == 'i' ||
						     format[i] == 'f' ||
						     format[i] == 's'))
				printf(", ");
			i++;
	}
	printf("\n");
	va_end(buffer);
}
