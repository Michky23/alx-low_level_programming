#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list_t list
 * @head: the pointer pointing to the head of the list
 * @n: the number of data to be added to the new list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *the_new_node;
	listint_t *add_node;

	(void)add_node;

	the_new_node = malloc(sizeof(listint_t));
	if (the_new_node == NULL)
		return (NULL);

	the_new_node->n = n;
	the_new_node->next = NULL;
	add_node = *head;

	if (*head == NULL)
	{
		*head = the_new_node;
	}
	else
	{
		while (add_node->next != NULL)
		{
			add_node = add_node->next;
		}
		add_node->next = the_new_node;
	}

	return (*head);
}
