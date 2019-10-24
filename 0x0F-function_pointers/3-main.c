#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add -
 *
 * Return: 
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (argv[2] == '/' && argv[3] == '0')
	{
		printf("Error\n");
	       	exit(98);
	}



}
