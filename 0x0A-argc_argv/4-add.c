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

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

			sum = sum + atoi(argv[i]);
			i++;

	}
	printf("%d\n", sum);

	return (0);
}
