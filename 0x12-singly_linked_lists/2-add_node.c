#include "lists.h"

/**
 * add_node - adds a node to head of LL
 * @head: head of LL
 * @str: string
 * Return: ptr to new head
 *
 * Description: (LL) Linked List
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
