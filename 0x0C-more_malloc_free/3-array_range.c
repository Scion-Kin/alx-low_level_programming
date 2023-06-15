#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smaller number
 * @max: bigger number
 * Return: pointer to result
 */

int *array_range(int min, int max)
{
	int *array;
	int dif;
	int i;

	if (min > max)
		return (NULL);
	dif = (max - min) + 1;
	array = malloc(dif * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
