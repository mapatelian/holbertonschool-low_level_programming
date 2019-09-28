#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 *
 * @h: pointed to the head of the list
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
