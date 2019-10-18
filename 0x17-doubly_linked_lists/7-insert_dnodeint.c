#include "lists.h"

/**
 * lenght - checks the lenght of the linked list
 *
 * @start: pointer to a head of the linked list
 *
 * Return: lenght of the linked list
 */

unsigned int lenght(dlistint_t *start)
{
	dlistint_t *tmp = start;
	unsigned int lenght = 0;

	while (tmp)
	{
		lenght++;
		tmp = tmp->next;
	}
	return (lenght);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the head of the node
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node; NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *new;
	unsigned int i;

	copy = *h;

	if (copy)
	{
		if (idx == 0)
		{
			new = add_dnodeint(h, idx);
			new->n = n;
		}

		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		for (i = 0; copy->next && i < idx - 1; i++)
		{
			copy = copy->next;
			if (copy == NULL)
				return (NULL);
		}
		new->n = n;
		new->next = copy->next;
		copy->next = new;
		new->prev = copy;
		if (new->next)
			new->next->prev = new;
	}
		return (new);
	return (NULL);
}
