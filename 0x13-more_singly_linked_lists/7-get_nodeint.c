#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: the pointer to the first element of a list
 * @index: the node desired position to retrieve
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index; z++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
