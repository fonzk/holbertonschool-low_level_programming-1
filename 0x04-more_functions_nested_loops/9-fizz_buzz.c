#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point
 * Descriptions: Print fizz and buzz
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i == 100)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
