#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
