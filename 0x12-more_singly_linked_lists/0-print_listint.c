#include "lists.h"

/**
 * print_listint - prints elemets of the linked list
 *
 * @h: pointer to a head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
