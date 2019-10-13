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
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	do {

		if  (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

			sum = sum + atoi(argv[i]);
			i++;

	} while (i < argc);

	printf("%d\n", sum);

	return (0);
}
