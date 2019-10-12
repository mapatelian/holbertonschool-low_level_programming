#include "lists.h"

/**
 * free_list - frees the list
 *
 * @head: pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
