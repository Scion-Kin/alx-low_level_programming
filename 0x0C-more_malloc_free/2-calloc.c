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
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	mem = s;
	for (i = 0; i < nmemb; i++)
		mem[i] = 0;
	return (s);
}
