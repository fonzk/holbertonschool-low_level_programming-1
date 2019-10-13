#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: command
 * @argv: command line integers to add
 * Return: 1 if no number, 0 if successful
 */

int main(int argc, char **argv)
{
	int i = 0;
	int sum;

	do{
		sum = sum + atoi(argv[i]);
		i++;
	}while (i < argc);
	printf("%i\n", sum);

	return (0);
}
