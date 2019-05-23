#include "lists.h"

/**
 * list_len - checks how many elements in a linked list
 *
 * @h: pointer to a head of the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
