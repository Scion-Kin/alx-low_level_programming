#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars of size @size
 * @size: Size of array
 * @c: array characters
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *k = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		k[i] = c;
	return (k);
}
