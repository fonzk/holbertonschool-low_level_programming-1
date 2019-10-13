#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: command
 * @argv: number of arguments
 * Return: 0 if successful, 1 if not 2 integers
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
