#include "lists.h"

/**
 * add_nodeint - add node to beginning of the list
 * @head: const listint_t
 * @n: number value of node
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

			if (!node)
			return (NULL);
			node->n = n;
			node->next = NULL;
			if (!*head)
			*head = node;
			else
			{
			node->next = *head;
			*head = node;
			}
			return (node);
			}
