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
	unsigned int i = 0, j = size - 1, k, l;

	while (i <= j)
	{
		k =  (i + j) / 2;
		printf("Searching in array: ");
		for (l = i; l < j; l++)
			printf("%d, ", array[l]);
		printf("%d\n", array[j]);

		if (value == array[k])
			return (k);

		else if (value > array[k])
			i = k + 1;

		else
			j = k - 1;
	}

	return (-1);
}
