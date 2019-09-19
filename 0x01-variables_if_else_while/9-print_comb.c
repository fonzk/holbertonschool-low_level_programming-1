#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: program prints all possible combo of single-digit numbers.
 * Return: 0 if successful
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
