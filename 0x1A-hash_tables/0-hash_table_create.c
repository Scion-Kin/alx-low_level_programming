#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 * @size: the desired size for the table
 * Return: the created table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_table_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	for (; i < size; i++)
	{
		new->array[i] = NULL;
	}

	new->size = size;

	return (new);
}
