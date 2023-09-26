#include "lists.h"

/**
 * free_listint - function that frees a linkint_t linked list
 * @head: the pointer pointing to the first node of the list
 * Return: Always (0)
 */

void free_listint(listint_t *head)

{
	listint_t *add_node;

	while ((add_node = head) != NULL)
	{
		head = head->next;
		free(add_node);
	}
}
