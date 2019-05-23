#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 *
 * @head: pointer to the head of the list
 * @str: string to be copied
 *
 * Return: pointer to a new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
