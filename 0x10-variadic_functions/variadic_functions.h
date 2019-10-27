#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_ch(va_list arg);
void print_in(va_list arg);
void print_fl(va_list arg);
void print_st(va_list arg);

/**
 * struct printall - structure of list of characters and functions
 * @list: pointer to strings
 * @f: pointer to functions
 */
typedef struct printall
{
	char *list;
	void (*f)(va_list);

} printall_t;

#endif /* VARIADIC_FUNCTIONS_H */
