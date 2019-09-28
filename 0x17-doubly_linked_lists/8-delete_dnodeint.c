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
	dlistint_t *copy;
	unsigned int i;

	copy = *head;

	if (copy)
	{
		if (index == 0)
		{
			*head = copy->next;
			free(copy);
			return (1);
		}

		if (index == 1)
		{
			copy = copy->next;
			free(copy);
			return (1);
		}

		if (index > 1)
		{
			for (i = 1; i < index; i++)
			{
				copy = copy->next;
				if (!copy->next)
					return (-1);
			}
			if (copy->next)
			copy->prev->next = copy->next;

			if (copy->prev)
			copy->prev->next = copy->next;

			free(copy);
			return (1);
		}
	}
	return (-1);
}
