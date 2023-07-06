#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of the list
 * @head: list
 * @n: int to be assigned
 * Return: return address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
