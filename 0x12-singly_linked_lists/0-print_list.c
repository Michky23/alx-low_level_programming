#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the pointer to the linked lists head
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)

{
	size_t node_increase;

	node_increase = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		node_increase++;
	}
	return (node_increase);
}
