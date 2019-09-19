#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: program that prints the lowercase alphabet in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char z;

	for (z = 'z' ; z >= 'a' ; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
