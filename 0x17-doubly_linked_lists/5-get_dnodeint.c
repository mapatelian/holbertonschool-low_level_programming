#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linkled linked list
 *
 * @head: pointer to the head of a list
 * @index: index of the node needed
 *
 * Return: pointer to the node at index needed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, lenght = 0;
	dlistint_t *copy;

	copy = head;

	while (copy)
	{
		lenght++;
		copy = copy->next;
	}

	if (index < lenght)
	{
		while (i < index)
		{
			head = head->next;
			i++;
		}

		return (head);
	}
	else
		exit (0);
}
