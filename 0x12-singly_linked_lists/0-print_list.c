#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the pointer to the linked lists head
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)

{
	unsigned int node_increase;
	const list_t *temp = NULL;

	node_increase = 0;
	temp = h;

	while (temp != NULL)
	{
		if (temp->str ==  NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp  = temp->next;
		node_increase++;
	}
	return (node_increase);
}
