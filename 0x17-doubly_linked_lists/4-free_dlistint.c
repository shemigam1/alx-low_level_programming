#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: ptr to head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		dlistint_t *next =  temp->next;
		free(temp);
		temp = next;
	}
}
