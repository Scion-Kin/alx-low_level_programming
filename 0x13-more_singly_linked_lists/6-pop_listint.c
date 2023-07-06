#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: list pointer
 * Return: the head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int a;
	
	if (*head == NULL)
		return (0);
		
	current = *head;
	a = current->n;
	*head = (*head)->next;
	free(current);
	
	return (a);
}
