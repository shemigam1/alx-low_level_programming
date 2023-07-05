#include "lists.h"

/**
 * add_nodeint_end - add node to end of LL
 * @head: ptr to head
 * @n: int
 * Return: ptr to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_h *current;
	listint_h *last;

	last = malloc(sizeof(listint_h));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last-next = NULL;
	if (*head == NULL)
		*head = last;
	else
	{
		current = *head;
		while (current != NULL)
		{
			current = current->next;
		}
		current->next = last;
	}
	return (last);
}
