#include "lists.h"

/**
 * listint_len - returns size
 * @h: beginning of the list
 * Return: size_t of list
 */

size_t listint_len(const listint_t *h)
{
	size_t hall = 0;

	if (!h)
		return (hall);
	while (h)
	{
		h = h->next;
		hall++;
	}
	return (hall);
}
