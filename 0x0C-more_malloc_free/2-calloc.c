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
	char *s;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	s = malloc(j);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		s[i] = 0;
	return (s);
}
