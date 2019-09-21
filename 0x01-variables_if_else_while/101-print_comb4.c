#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: prints all possible combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int a = '0';
	int b;
	int c;

	while (a < '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = a + 2;
			while (c <= '9')
			{
			putchar (a);
			putchar (b++);
			putchar (c);
			if (a != '7')
			{
				putchar (',');
				putchar(' ');
			}
			c++;
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
