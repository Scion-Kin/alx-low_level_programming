#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: array elements
 * @size: bytes for each element
 * n: bytes to concatenate
 * Return: pointer to result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i, j;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	s = malloc(j);
	if (s == NULL)
		return (NULL);
	memory = s;
	for (i = 0; i < nmemb; i++)
		memory[i] = 0;
	return (s);
}
