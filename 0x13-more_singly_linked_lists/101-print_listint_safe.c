#include "lists.h"

/**
 * print_listint_safe - print a LL
 * @head: head node
 * Return: size of LL
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *current;
	const listint_t *check;

	current = head;
	check = head;
	while (current != NULL && current->next != NULL)
	{
		check = check->next;
		current = current->next->next;

		if (check == NULL || current == NULL)
			exit(98);
		if (check == current)
		{
			printf("[%p] %d\n", (void *)check, check->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)check, check->n);
		i++;
	}
	return (i);
}
