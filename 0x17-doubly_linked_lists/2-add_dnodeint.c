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

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
