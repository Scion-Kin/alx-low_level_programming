#include "hash_tables.h"

/**
 * hash_table_get - finds and retrieves the value associated with a key
 * @ht: the table to look into
 * @key: the key for the value needed
 * Return: the value, or NULL if it was not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
