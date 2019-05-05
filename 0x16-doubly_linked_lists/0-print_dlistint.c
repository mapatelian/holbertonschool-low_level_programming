#include "lists.h"

/**
 * print_dlistint - prints number of elements in a linked list
 *
 * @h: pointer to a head of a linked list
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}