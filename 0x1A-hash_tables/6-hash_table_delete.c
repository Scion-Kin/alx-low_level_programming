#include "hash_tables.h"

/**
 * hash_table_delete - deletes a has table
 * @ht: the table to delete
 * Return: none
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *post;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return NULL;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			post = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = post;
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	free(ht);
}
