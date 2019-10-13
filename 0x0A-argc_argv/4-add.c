#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: command line arguments
 * @argv: command line integers to add
 * Return: 1 if no number, 0 if successful
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (!(*argv[i] > '0' && *argv[i] < '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
