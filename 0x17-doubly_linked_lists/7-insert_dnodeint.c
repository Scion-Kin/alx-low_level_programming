#include "lists.h"

/*
 * insert_dnodeint_at_index - adds a node at a given index.
 * @h: the list to work with
 * @idx: the index at which the node will be added.
 * @n: the integer for the node.
 * Return: the resulting list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->prev = current;
	new->next = current->next;

	if (current->next != NULL)
	{
	current->next->prev = new;
	}

	current->next = new;

	return (new);
}
