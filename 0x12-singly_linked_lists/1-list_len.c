#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: the pointer to node
 * Return: number of node
 */

size_t list_len(const list_t *h)

{
	size_t node_increase;

	node_increase = 0;

	for (node_increase = 0; h != NULL; node_increase++)
	{
		h = h->next;
	}
	return (node_increase);
}
