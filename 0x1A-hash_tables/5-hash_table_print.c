#include "hash_tables.h"

/**
 * hash_table_print - function that print hash tables
 * @ht: the hash table
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *elem;
	unsigned long int c;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		if (ht->array[c])
		{
			if (flag == 1)
			{
				printf(", ");
			}
			elem = ht->array[c];
			while (elem != NULL)
			{
				printf("%s: %s", elem->key, elem->value);
				elem = elem->next;
				if (elem != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
