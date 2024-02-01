#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table.
 * @size: the size of the hash table
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int c;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < size; c++)
	{
		table->array[c] = NULL;
	}
	return (table);
}
