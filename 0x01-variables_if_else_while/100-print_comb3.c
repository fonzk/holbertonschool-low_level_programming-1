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

	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar (a);
			putchar (b++);
			if (a != '8')
			{
				putchar (',');
				putchar(' ');
			}

		}
		a++;
	}
	putchar ('\n');
	return (0);
}
