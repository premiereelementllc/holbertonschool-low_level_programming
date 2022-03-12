#include "lists.h"

/**
 * last_node - find last element in linked list
 * @head - linked list
 * Return: last node
 */

listint_t *last_node(listint_t *head)
{
	if (!head)
		return (NULL);
	if (!head->next)
		return (head);
	return (last_node(head->next));
}

/**
 * add_nodeint_end - add node in the end of linked list
 * @head: const listint_t
 * @n: number value of node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	if (!*head)
	{
		*head = node;
		return (node);
	}

	last = last_node(*head);
	last->next = node;
	return (node);
}
