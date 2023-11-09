#include "lists.h"

/**
 * size_t print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the linked list
 * Return: number of nodes in a list
 */

size_t print_dlistint(const dlistint_t *h) {
        dlistint_t *current = h;
        int node_count = 0;

        while (current->prev) {
                current = current->prev;
        }

        while (current->next) {
                printf("%d\n", current->n);
                current = current->next;
                node_count++;
        }
        return (node_count);
}