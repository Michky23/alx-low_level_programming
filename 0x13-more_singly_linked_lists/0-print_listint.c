#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the head pointer to the list
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t node_increase;

	node_increase = 0;

	if (h == NULL)
		return (0);
	for (node_increase = 0; h != NULL; node_increase++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}
	return (node_increase);
}
