#include "lists.h"

/**
 * add_dnodeint - adds new node at end of the list
 * @head: head of list
 * @n: node
 * Return: address of new node or NULL is fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
