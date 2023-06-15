#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: input
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}

