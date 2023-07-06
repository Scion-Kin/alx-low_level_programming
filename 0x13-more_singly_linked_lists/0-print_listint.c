#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints the linked list
 * @h: list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t i = 0;

	if (c == NULL)
	{
		return (NULL);
	}
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		i++;
	}
	return (i);
}
