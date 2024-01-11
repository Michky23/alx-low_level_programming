#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: the head of a linked list
 * @n: the number of element to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
