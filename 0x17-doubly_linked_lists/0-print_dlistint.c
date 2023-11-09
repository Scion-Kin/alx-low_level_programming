#include "lists.h"

/**
 * print_dlistint - prints all the nodes of a list
 * @h: the linked list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
        size_t node_count = 0;

        while (h && h->prev)
        {
                h = h->prev;
        }

        while (h)
        {
                printf("%d\n", h->n);
                h = h->next;
                node_count++;
        }

        return (node_count);
}