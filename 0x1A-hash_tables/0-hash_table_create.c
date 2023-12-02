#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 * @size: the desired size for the table
 * Return: the created table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t) * size);

	return (new);
}
