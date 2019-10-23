#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: print this name
 * @f: pointer to function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
