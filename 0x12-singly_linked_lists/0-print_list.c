#include "lists.h"

/**
 * print_list - prints a list
 * @h: list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	const list_t *current = NULL;
	size_t i = 0;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			current = current->next;
			i++;
		}
		printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
