#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new
 * node at a given position
 * @h: the head of the list
 * @idx: the index of the list
 * @n: what to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last, *back;
	unsigned int r = 0;

	if (*h == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	last = *h;
	while (last)
	{
		if (idx == r)
		{
			new->n = n;
			back = last->prev;
			new->next = last;
			new->prev = back;
			back->next = new;
			return (*h);
		}
		last = last->next;
		r++;
	}
	return (NULL);
}
