#include "hash_tables.h"

/**
 * hash_table_delete - deletes a has table
 * @ht: the table to delete
 * Return: none
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			free(current->key);
			current->key = NULL;
			free(current->value);
			current->value = NULL;
			free(current);
			current = NULL;
		}
	}
	free(ht);
	ht = NULL;
}
