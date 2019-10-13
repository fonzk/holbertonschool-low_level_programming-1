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
	long int sum = 0;

	while (i < argc)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("%ld\n", sum);

	return (0);
}
