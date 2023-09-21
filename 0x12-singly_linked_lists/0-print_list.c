#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the pointer to the linked lists head
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)

{
	int node_increase;

	node_increase = 1;

	if (h == NULL)
		return (0);
	for (node_increase = 1; h->next != NULL; node_increase++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (node_increase);
}
