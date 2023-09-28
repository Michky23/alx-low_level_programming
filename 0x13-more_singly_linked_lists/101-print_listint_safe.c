#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: the head of a list.
 *
 * Return: Always (0)
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - function that prints a listint_t linked list
 * @head: the head of a list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)

{
	size_t numnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (numnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnodes++;
	}

	free_listp(&hptr);
	return (numnodes);
}
