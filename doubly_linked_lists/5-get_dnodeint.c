#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a list
 * @head: the head of the list
 * @index: the node to find
 *
 * Return: null if fail to find the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
