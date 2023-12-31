#include "lists.h"

/**
 * list_len - shows the lenght of a list
 * @h: the linked list
 *
 * Return: the count of a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
