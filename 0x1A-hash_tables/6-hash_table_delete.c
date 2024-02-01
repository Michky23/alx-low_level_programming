#include "hash_tables.h"

/**
 * hash_table_delete - function that delete hash table
 * @ht: the hash table
 * Return: null
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c;
	hash_table_t *table = ht;
	hash_node_t *new, *tmp;

	if (ht == NULL)
		return;
	for (c = 0; c < ht->size; c++)
	{
		if (ht->array[c])
		{
			new = ht->array[c];
			while (new != NULL)
			{
				tmp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = tmp;
			}
		}
	}
	free(table->array);
	free(table);

}
