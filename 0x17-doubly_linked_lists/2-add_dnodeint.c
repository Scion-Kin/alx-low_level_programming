#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of a list.
 * @head: the linked list.
 * @n: the number to insert in the node
 * Return: the resulting list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
		new->next = NULL;

	else
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;
	return (*head);
}
