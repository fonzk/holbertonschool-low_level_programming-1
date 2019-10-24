#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*p2func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((atoi(argv[3]) == 0) && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	p2func = get_op_func(argv[2]);
	if (p2func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p2func(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
