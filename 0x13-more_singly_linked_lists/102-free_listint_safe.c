#include "lists.h"

/**
 * free_listp1 - function that frees a linked list
 * @head: the head of a list.
 * Return: Always (0).
 */

void free_listp1(listp_t **head)
{
	listp_t *oldtemp;
	listp_t *curr_temp;

	if (head != NULL)
	{
		curr_temp = *head;
		while ((oldtemp = curr_temp) != NULL)
		{
			curr_temp = curr_temp->next;
			free(oldtemp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: the head of a list.
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t numnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr_temp;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp1(&hptr);
				return (numnodes);
			}
		}

		curr_temp = *h;
		*h = (*h)->next;
		free(curr_temp);
		numnodes++;
	}

	*h = NULL;
	free_listp1(&hptr);
	return (numnodes);
}
