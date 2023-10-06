#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *cur = ht->array[i];

		while (cur != NULL)
		{
			printf("{ %s: %s }\n", cur->key, cur->value);
			cur = cur->next;
		}
	}
}
