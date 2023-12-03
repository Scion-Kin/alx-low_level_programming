#include "hash_tables.h"

/**
 * hash_table_set - inserts a node into a hash table
 * @ht: the table to insert into
 * @key: the key for the node
 * @value: the value of the node
 * Return: 1 on success and 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;
	unsigned long int index;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				free(node->key);
				free(node->value);
				free(node);
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
