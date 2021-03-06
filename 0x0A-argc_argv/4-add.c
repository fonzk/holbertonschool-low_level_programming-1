#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: command line arguments
 * @argv: command line integers to add
 * Return: 1 if no number, 0 if successful
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{

		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
