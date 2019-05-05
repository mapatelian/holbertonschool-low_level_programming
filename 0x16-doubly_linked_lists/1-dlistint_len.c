#include "lists.h"

/**
 * dlistint_len - checks the number of elements in a linked list
 *
 * @h: pointer to a head of a list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
