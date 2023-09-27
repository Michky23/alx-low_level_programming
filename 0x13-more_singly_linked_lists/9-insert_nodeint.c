#include "lists.h"

/**
 * create_new_node - function that creates a new node
 * @n: the data of the node
 * Return: the new node pointer
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: the pointer to the first element of the list
 * @idx: index to the position the new node is to be inserted
 * @n: the data of the new node created
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int k;
	listint_t *new_temp;
	listint_t *temp_old;
	listint_t *new_node;

	new_temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		*head = new_node;
	}
	for (k = 0; k < idx - 1 && new_temp != NULL && idx != 0; k++)
		new_temp = new_temp->next;
	if (new_temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = new_temp;
	else
	{
		temp_old = new_temp->next;
		new_temp->next = new_node;
		new_node->next = temp_old;
	}
	return (new_node);
}
