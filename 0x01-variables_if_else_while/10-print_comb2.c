#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: Write a program that prints the numbers from 00 to 99
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	while (i < 100)
	{
		putchar((i % 10) + '0');
		putchar((i % 10) + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
