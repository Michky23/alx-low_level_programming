#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: the pointer to the beginning of the list
 * @index: index of the node to be freed
 * Return: 1 if successful an -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int b;
	listint_t *old_temp;
	listint_t *new_node;

	old_temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (b = 0; b < index - 1 && old_temp != NULL && index != 0; b++)
		old_temp = old_temp->next;
	if (old_temp == NULL)
		return (-1);
	if (index == 0)
	{
		new_node = old_temp->next;
		free(old_temp);
		*head = new_node;
	}
	else
	{
		if (old_temp->next == NULL)
			new_node = old_temp->next;
		else
			new_node = old_temp->next->next;
		free(old_temp->next);
		old_temp->next = new_node;
	}
	return (1);
}
