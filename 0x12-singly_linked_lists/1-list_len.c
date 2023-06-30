#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: list
 * Return: numbers of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *node_tra = h;

	while (node_tra != NULL)
	{
		i++;
		node_tra = node_tra->next;
	}
	return (i);
}
