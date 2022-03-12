#include "lists.h"

/**
 * print-list - prints a linked list containing ints
 * @h: beginning of list
 * Return: save
 */

size_t print_listint(const listint_t *h)
{
	size_t save = 0;

	if (!h)
		return (save);
	while (h)
	{
		printf("%d\n", h->n);
		save++;
		h = h->next;
	}
	return (save);
}
