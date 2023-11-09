#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the numbers in a list
 * @head: the list to use for the calculation
 * Return: sum of the numbers in the nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;
	return (sum);
}
