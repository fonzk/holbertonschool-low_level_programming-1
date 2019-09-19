#include <stdio.h>
/**
 * main - entry point
 * Descriptions: Print alphabet minus 'q' and 'e'
 * Return: 0 if successful
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		      putchar(a);
		      a++;
	}
	putchar('\n');
	return (0);
}
