#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: the head pointer to the list of node
 * Return: the number of element in the list of node
 */

size_t listint_len(const listint_t *h)

{
	size_t increase_nodes;

	increase_nodes = 0;

	if (h == NULL)
		return (0);
	for (increase_nodes = 0; h != NULL; increase_nodes++)
	{
		h = h->next;
	}
	return (increase_nodes);
}
