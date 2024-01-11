#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 * @head: the head of doubly linked list
 * @index: the index to search from
 * Return: if node does not exist or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == c)
		{
			return (head);
		}
		head = head->next;
		c++;
	}
	return (NULL);
}
