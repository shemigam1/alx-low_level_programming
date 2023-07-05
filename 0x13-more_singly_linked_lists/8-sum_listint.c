#include "lists.h"

/**
 * sum_listint - returns sum of data in nodes
 * @head: node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
