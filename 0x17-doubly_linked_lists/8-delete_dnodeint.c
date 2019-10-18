#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 *
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy, *tmp;
	unsigned int i;

	if (!*head || !head)
		return (-1);

	copy = *head;

	if (index == 0)
	{
		if (copy->next)
			copy->prev = NULL;

		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; copy->next && i < index;)
	{
		copy = copy->next;
		i++;
	}
	if (index > i)
		return (-1);

	tmp = copy->prev;
	tmp->next = copy->next;
	tmp->prev->next = tmp;

	free(copy);
	return (1);
}
