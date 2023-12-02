#include "hashnews.h"

/**
 * hashnew_create - creates a hasnew
 * @size: the desired size for thenew
 * Return: the creatednew
*/

hashnew_t *hashnew_create(unsigned long int size)
{
	hashnew_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hashnew_t));

	if new == NULL)
		return (NULL);

	new->size = size;

	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	return (new);
}
