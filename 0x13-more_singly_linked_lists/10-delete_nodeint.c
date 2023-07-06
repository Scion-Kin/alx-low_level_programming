#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: list pointer
 * @index: index
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (i = 1; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
