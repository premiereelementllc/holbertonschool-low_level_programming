#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint(const dlistint_t *);
 * @h: head of list
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
