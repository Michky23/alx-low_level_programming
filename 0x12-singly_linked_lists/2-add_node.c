#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the pointer to the headr of the list
 * @str: the string to be inserted to first node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);/*Return NULL if the input string is NULL*/
	}
	new_node = malloc(sizeof(list_t));/*allocate memoryto the new node*/

	if (new_node == NULL)
	{
		return (NULL);/*Return NULL if memory allocation fails*/
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}

/**
 * len - the length of str (string)
 * @str: the string to get its length
 * Return: the length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
