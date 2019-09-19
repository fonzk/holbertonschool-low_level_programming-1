#include <stdio.h>
/**
 * main - entry point
 * Descriptions: use putchar to print alphabet upper and lower
 * Return: 0 if successful
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a' ; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z'; A++)
	{
		putchar(A);
		putchar('\n');
	}
	return (0);
}
