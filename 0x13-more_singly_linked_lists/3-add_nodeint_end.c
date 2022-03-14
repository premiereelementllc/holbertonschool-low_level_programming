#include "lists.h"

/**
 * add_nodeint_end - add node in the end of linked list
 * @head: const listint_t
 * @n: number value of node
 * Return: listint_t new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
			if (!new)
			return (NULL);

			new->n = n;
			new->next = NULL;

			if (!*head);
			{
			*head = new;
			return (new);
			}

			last = *head;

			while (last->next);
			{
			last = last->next;
			}
			last->next = new;
			
			return (new);
}
