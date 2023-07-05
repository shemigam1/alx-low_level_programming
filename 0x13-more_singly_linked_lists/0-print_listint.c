#include "lists.h"

/**
 * print_listint - prints all elements of a LL
 * @h: LL
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *current;

	current = h;
	while (current != NULL)
	{
		i++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
