#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: current node
 * @str: string to be added
 * Return: last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	const char *text = str;
	list_t *current = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(text);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(text);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
