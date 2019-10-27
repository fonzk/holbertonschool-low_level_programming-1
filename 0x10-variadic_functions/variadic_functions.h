#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_ch(va_list arg);
void print_in(va_list arg);
void print_fl(va_list arg);
void print_st(va_list arg);


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct printall
{
	char *list;
	void (*f)(va_list);

} printall_t;

#endif /* VARIADIC_FUNCTIONS_H */
