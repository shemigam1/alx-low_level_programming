#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: ptr
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
