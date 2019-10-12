#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to a head of the list
 * @str: string to be inserted
 *
 * Return: address of the new element if succesed, NULL othervise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *copy;
	int lenght = 0;

	copy = *head;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	while (str[lenght])
		lenght++;

	new->str = strdup(str);
	new->len = lenght;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->next = (*head);
		(*head) = new;
	}

	else
	{
		while (copy->next)
			copy = copy->next;

		copy->next = new;
	}
	return (new);
}
