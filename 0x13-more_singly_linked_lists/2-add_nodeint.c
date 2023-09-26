#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: the pointer to the head pointer of nodes
 * @n: new int. to be created
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *the_new_node;

	if (head == NULL)
		return (NULL);

	the_new_node = malloc(sizeof(listint_t));
	if (the_new_node == NULL)
		return (NULL);
	if (*head == NULL)
		the_new_node->next = NULL;
	else
		the_new_node->next = *head;
	the_new_node->n = n;
	*head = the_new_node;

	return (*head);
}
