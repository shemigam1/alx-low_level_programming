#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head node
 * @idx: index
 * @n: data
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *n_node;
	listint_t *next_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || i < idx - 1)
	{
		free(n_node);
		return (NULL);
	}
	next_node = current->next;
	current->next = n_node;
	n_node->next = next_node;
	return (n_node);
}
