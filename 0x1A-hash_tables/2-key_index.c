#include "hash_tables.h"

/**
 * key_index - creates index of key in a hash table
 * @key: key
 * @size: size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, i;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
