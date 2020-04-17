#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;

		if (array[mid] < value)
			left = mid + 1;
	}

	return (-1);
}
