#include "hash_tables.h"

/**
 * bring_node - makes a new for a hash table
 * @key: the key
 * @value: the value
 * Return: the new new
 */

hash_node_t *bring_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}

/**
 * hash_table_set - inserts a new into a hash table
 * @ht: the table to insert into
 * @key: the key for the new
 * @value: the value of the new
 * Return: 1 on success and 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;
	unsigned long int index;

	node = bring_node(key, value);
	if (node == NULL)
		return (0);

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

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
