#include <stdio.h>

/**
 * main - Entry point
 * Descriptions: Write a program that prints the alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
		putchar('\n');
	};
	return (0);
}
