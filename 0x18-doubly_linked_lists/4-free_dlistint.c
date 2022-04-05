#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *full;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		full = head->next;
		free(head);
		head = full;
	}
}

