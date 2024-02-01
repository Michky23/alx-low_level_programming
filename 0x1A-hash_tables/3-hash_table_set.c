#include "hash_tables.h"

/**
 * hash_table_set - function that add element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *new_value;
	unsigned long int index, c;

	if (ht == NULL || value == NULL || *key == '\0' || key == NULL)
	{
		return (0);
	}
	new_value = strdup(value);
	if (new_value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (c = index; ht->array[c]; c++)
	{
		if (strcmp(ht->array[c]->key, key) == 0)
		{
			free(ht->array[c]->value);
			ht->array[c]->value = new_value;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = new_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
