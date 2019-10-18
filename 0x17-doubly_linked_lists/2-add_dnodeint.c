#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 *
 * @head: pointer to the head of the list
 * @n: value of the node
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	if (head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
	}

	new->n = n;
	new->next = *head;
	new->prev = *head;
	*head = new;

	return (new);
}
