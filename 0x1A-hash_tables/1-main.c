#include "hash_tables.h"
#include <stdio.h>

int main(void)
{
    hash_table_t *ht;
    unsigned long int index;

    ht = hash_table_create(1);
    if (ht == NULL)
    {
        fprintf(stderr, "Failed to create hash table.\n");
        return (EXIT_FAILURE);
    }

    if (!hash_table_set(ht, "betty", "cool") ||
        !hash_table_set(ht, "mark", "cool") ||
        !hash_table_set(ht, "betty", "cooler"))
    {
        fprintf(stderr, "Failed to set values in the hash table.\n");
        return (EXIT_FAILURE);
    }

    index = key_index((const unsigned char *)"betty", 1);

    if (ht->array[index] != NULL)
    {
        printf("Key: %s, Value: %s\n", ht->array[index]->key, ht->array[index]->value);

        if (ht->array[index]->next != NULL)
        {
            printf("Key: %s, Value: %s\n", ht->array[index]->next->key, ht->array[index]->next->value);
        }
        else
        {
            printf("No linked list for the key 'betty'.\n");
        }
    }
    else
    {
        printf("No entry found for the key 'betty'.\n");
    }

    return (EXIT_SUCCESS);
}
