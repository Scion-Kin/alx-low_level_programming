#include "lists.h"

/**
 * listint_len - list length calculator
 * @h: list
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
