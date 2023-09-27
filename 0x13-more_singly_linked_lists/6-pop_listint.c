#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: the pointer pointing to the element of the list
 * Return: the head node’s data (n) or if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *top = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	top = *head;
	value = top->n;
	*head = top->next;
	free(top);
	return (value);
}
