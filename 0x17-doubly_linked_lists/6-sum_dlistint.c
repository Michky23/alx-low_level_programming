#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: the head of doubly linked list
 * Return: if the list is empty or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
