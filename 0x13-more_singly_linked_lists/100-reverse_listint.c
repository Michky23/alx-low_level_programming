#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: the pointer to the head of node
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *oldtemp;
	listint_t *newtemp;

	if (head == NULL || *head == NULL)
		return (NULL);
	oldtemp = *head;
	*head = oldtemp->next;
	oldtemp->next = NULL;

	while (*head != NULL)
	{
		newtemp = (*head)->next;
		(*head)->next = oldtemp;
		oldtemp = *head;
		if (newtemp == NULL)
			return (*head);
		*head = newtemp;
	}
	if (*head == NULL)
	{
		*head = oldtemp;
		return (*head);
	}
	return (NULL);
}
