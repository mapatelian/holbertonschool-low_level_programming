#include "lists.h"

/**
 * add_nodeint - adds a node in the beginning of the list
 *
 * @head: pointer to a head of the linked list
 * @n: value of the node
 *
 * Return: address of the new node, NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	if (!head)
		return (NULL);

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
