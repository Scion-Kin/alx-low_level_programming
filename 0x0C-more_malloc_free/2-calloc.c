#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @c: memory area to be filled
 * @b: char to copy
 * @d: number of times to copy b
 * Return: pointer to the memory area c
 */
char *_memset(char *c, char b, unsigned int d)
{
	unsigned int a;

	for (a = 0; a < d; a++)
	{
		c[a] = b;
	}

	return (c);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *bef;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bef = malloc(size * nmemb);

	if (bef == NULL)
		return (NULL);

	_memset(bef, 0, nmemb * size);

	return (bef);
}
