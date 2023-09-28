#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: the head of the node list.
 * Return: The address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point;
	listint_t *preview;

	point = head;
	preview = head;
	while (head && point && point->next)
	{
		head = head->next;
		point = point->next->next;

		if (head == point)
		{
			head = preview;
			preview =  point;
			while (1)
			{
				point = preview;
				while (point->next != head && point->next != preview)
				{
					point = point->next;
				}
				if (point->next == head)
					break;

				head = head->next;
			}
			return (point->next);
		}
	}

	return (NULL);
}
