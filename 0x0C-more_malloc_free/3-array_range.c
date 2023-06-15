#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smaller number
 * @max: bigger number
 * n: bytes to concatenate
 * Return: pointer to result
 */

int *array_range(int min, int max)
{
	int *array, dif; int i = 0;
	
	if (min > max)
		return (NULL);
	dif = max - min;
	array = malloc((dif + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < dif)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}