#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list to free
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current->prev != NULL)
	{
		head = current->prev;
		free(current);
	}
	while (current->next != NULL)
	{
		head = current->next;
		free(current);
	}
	free(current);
}
