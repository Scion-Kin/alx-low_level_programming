#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *bef;
	int a, b;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;

	bef = malloc(sizeof(int) * b);

	if (bef == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		bef[a] = min++;
	}
	return (bef);
}
