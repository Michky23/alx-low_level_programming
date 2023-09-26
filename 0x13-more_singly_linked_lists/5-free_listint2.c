#include "lists.h"

/**
 * free_listint2 - function that Free a list of nodes
 * @head: the pointer pointing to the first element of the list
 */

void free_listint2(listint_t **head)

{
	listint_t *add_node2;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		add_node2 = (*head)->next;
		free(*head);
		*head = add_node2;
	}
	free(*head);
	*head = NULL;
}
