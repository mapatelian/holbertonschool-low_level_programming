#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the linked list
 *
 * @head: pointer to a head of the list
 * @n: value of each node
 *
 * Return: address of the new node, NULL is fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *copy = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (copy->next)
	{
		copy = copy->next;
	}

	new->n = n;
	new->next = NULL;
	copy->next = new;

	return (new);
}
