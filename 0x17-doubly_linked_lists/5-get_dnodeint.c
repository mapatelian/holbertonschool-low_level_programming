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
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	if (head)
		return (head);

	return (NULL);
}
