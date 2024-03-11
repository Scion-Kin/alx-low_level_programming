#include "search_algos.h"

/**
 * linear_search - searches for an array element with linear search algorithm
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the array if found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
