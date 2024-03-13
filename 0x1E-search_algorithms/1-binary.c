#include "search_algos.h"
#include <math.h>

/**
 * binary_search - searches for an element in a sorted array with
 * binary search algorithm
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the array if found, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, j;

	while (i < size)
	{
		printf("Searching in array: ");
		for (j = i; j < (i + size - 1); j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[i + size - 1]);

		size = floor(size / 2);

		if (value == array[size])
			return (size);

		else if (value > array[i] && value > array[size - 1])
			i = size;

		else if (value > array[i] && value <= array[size - 1])
			i = i;
	}

	return (-1);
}
