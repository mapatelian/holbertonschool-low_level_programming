#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: sum of the values of the nodes; 0 if the list doesn't exist
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head)
	{
		while (head)
		{
			result = result + head->n;
			head = head->next;
		}
		return (result);
	}
	return (0);
}
