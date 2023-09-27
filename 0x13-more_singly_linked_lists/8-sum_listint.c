#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: the pointer pointing to the first element of a list
 * Return: if empty return 0
 */

int sum_listint(listint_t *head)
{
	int sumlist = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sumlist += head->n;
		head = head->next;
	}
	return (sumlist);
}
