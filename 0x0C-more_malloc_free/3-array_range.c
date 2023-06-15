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
	dif = max - min;
	array = malloc((dif + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
