#include <stdio.h>

void hare(void) __attribute__((constructor));
/**
 * hare -  entry point
 * __attribute__ ((constructor)) - function to execute before main
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
