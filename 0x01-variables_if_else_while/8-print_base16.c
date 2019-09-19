#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: prints all the numbers of base 16 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	char dig = '0';
	char alpha = 'a';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
