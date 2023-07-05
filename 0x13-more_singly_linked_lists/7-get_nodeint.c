#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index n
 * @head: head node
 * @index: int
 * Return: ptr to node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	i = 0;
	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
