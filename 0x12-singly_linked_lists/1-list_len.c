#include "lists.h"

/**
 * list_len - counts the number of elements in a LL
 * @h: LL
 * Return: size_t
 *
 * Description: (LL) linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *current = NULL;
	size_t i;

	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
