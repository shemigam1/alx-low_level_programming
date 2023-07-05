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
	unsigned int i = 0;


	current = *head;
	while (current != NULL)
	{
		if (i == idx)
		{
			n_node = malloc(sizeof(listint_t));
			if (n_node == NULL)
				return (NULL);
			n_node->n = n;
			n_node->next = current;
			return (n_node);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
