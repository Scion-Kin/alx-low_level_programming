#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *bef;
	char *befe;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}
	bef = malloc(new_size);
	if (!bef)
	{
		return (NULL);
	}
	befe = bef;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			bef[a] = befe[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			bef[a] = befe[a];
	}
	free(ptr);
	return (bef);
}
