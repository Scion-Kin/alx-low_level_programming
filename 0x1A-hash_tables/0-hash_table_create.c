#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 * @size: the desired size for the table
 * Return: the created table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;
	unsigned long int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
	{
		free(new);
		new = NULL;
		return (NULL);
	}

	for (; i < size; i++)
	{
		array[i] = NULL;
	}

	new->array = array;
	new->size = size;

	return (new);
}
