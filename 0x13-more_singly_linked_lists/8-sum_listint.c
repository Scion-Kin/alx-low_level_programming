#include "lists.h"

/**
 * sum_listint - calculates the sum of the numbers in a list
 * @head: list pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
