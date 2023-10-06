#include "hash_tables.h"

/**
 * hash_table_set - add elem to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	i = key_index((const unsigned char *)key, ht->size);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
