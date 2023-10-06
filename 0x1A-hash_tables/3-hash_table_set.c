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
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	i = key_index((const unsigned char *)key, ht->size);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return(0);
	}
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
