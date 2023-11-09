#include "lists.h"

/**
 * get_dnodeint - searches for the n-nth node of a list.
 * @head: the linked list to traverse
 * @index: the index of the node to search for
 * Return: the found node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		current = current->next;
		n++;
	}

	if (index > n)
		return (NULL);

	else
	{
		for (n = 0; n < index; n++)
		{
			head = head->next;
		}
	}
	return (head);
}
