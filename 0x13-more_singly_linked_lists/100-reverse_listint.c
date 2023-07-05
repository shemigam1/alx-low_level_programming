#include "lists.h"

/**
 * reverse_listint - reverse a LL
 * @head: head node
 * Reverse: ptr to node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return *head;

	first = *head;
	rest = (*head)->next;

	rest = reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;
	*head = rest;
	return *head;
}
