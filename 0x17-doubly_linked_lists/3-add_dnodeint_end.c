#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 *
 * @head: pointer to the head of the linked list
 * @n: value of an element of the linked list
 *
 * Return: pointer to a new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			new->prev = tmp;
			tmp->next = new;
		}

	return (new);
}
