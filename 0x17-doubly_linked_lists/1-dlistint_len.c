#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list.
 * @h: the linked list
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h && h->prev)
	{
		h = h->prev;
	}

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}