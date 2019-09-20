#include <stdio.h>
/**
 * main - Entry point
 * Descriptions: prints all possible combinations of two digits
 * Return: 0 if successful
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < '9')
	{
		while (b <= '9')
		{
			b = a + 1;
			putchar (a);
			putchar (b);
			if (a != 8)
			{
				putchar (',');
				putchar(' ');
			}

		}
		a++;
	}
	return (0);
}
