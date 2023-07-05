#include "lists.h"

/**
 * pop_listint - removes the first node of a LL
 * @head: head of LL
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint *n_head;
	int r;

	if (*head == NULL)
		return (0);
	n_head = (*head)->next;
	r = (*head)->n;
	free(*head);
	*head = n_head;

	return (r);
}
