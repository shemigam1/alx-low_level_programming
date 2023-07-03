#include "lists.h"

/**
 * add_node_end - add node to end of LL
 * @head: ptr to head of LL
 * @str: string
 * Return: ptr to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *last;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);
	last->str = strdup(str);
	if (last->str == NULL)
	{
		free(last);
		return (NULL);
	}
	last->len = strlen(str);
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last;
	}

	return (last);
}
