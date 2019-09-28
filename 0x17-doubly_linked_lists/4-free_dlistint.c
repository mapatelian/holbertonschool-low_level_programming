#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 *
 * @head: pointer to a list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
