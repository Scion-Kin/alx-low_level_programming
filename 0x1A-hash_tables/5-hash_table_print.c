#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table in form
 * of a python dictionary
 * @ht: the  hash table
 * Return: none
*/

void hash_table_print(const hash_table_t *ht)
{
		hash_node_t *current;
		unsigned long int i;
		char *separator = "";

		if (ht == NULL)
			return;

		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("%s'%s': '%s'", separator, current->key, current->value);
				separator = ", ";
				current = current->next;
			}
		}
		printf("}\n");
}
