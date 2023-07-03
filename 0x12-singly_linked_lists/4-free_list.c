#include "lists.h"

/**
 * free_list - frees linked list
 * @head: ptr to head of LL
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
