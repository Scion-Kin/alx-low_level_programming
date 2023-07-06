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
	const list_t *node_tra = h;

	int i = 0;

	while (node_tra != NULL)
	{
		if (node_tra->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		else
		{
			printf("[%d] %s\n", node_tra->len, node_tra->str);
			i++;
		}
		node_tra = node_tra->next;
	}
	return (i);
}
