#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of the list
 * @head: list
 * @n: int to be assigned
 * Return: return address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t);
	listint_t *current = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (current != NULL)
	{
		if (current == NULL)
		{
			current = new;
		}
		current = current->next;
	}
	return (current);
}
