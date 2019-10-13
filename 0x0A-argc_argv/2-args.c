#include <stdio.h>

/**
 * main - entry point
 * @argc: command
 * @argv: command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	do {
		printf("%s\n", argv[i]);
		       i++;
	} while (i < argc);
	return (0);
}
