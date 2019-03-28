#include "lists.h"

/**
 * listint_len - counts elemets of a linked list
 *
 * @h: pointer to a head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
