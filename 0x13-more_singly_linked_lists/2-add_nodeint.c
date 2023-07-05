#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of LL
 * @head: double ptr to node
 * @n: int
 * Return: ptr to node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_head;

	n_head  = malloc(sizeof(listint_t));
	if (n_head == NULL)
		return (NULL);
	n_head->n = n;
	n_head->next = *head;
	*head = n_head;
	return (*head);
}
