#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: the linked list.
 * @n: the integer for the new node.
 * Return: address of the node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
