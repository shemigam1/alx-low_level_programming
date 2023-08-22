#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: ptr
 * @idx: unsigned int
 * @n: int
 * Return: node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = current;
		if (current != NULL)
			current->prev = new;
		current = new;
		return (new);
	}
	while (current != NULL && i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;
	return (new);
}
