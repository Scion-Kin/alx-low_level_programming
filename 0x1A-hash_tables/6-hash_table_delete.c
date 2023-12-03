#include "hash_tables.h"

/**
 * hash_table_delete - deletes a has table
 * @ht: the table to delete
 * Return: none
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (current != NULL)
		{
			current = ht->array[i]->next;
			free(current->key);
			free(current->value);
			free(current);
			ht->array[i] = current;
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
