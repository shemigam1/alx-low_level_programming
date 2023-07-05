#include "lists.h"

/**
 * listint_len - returns the size of a LL
 * @h: ptr to node
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
