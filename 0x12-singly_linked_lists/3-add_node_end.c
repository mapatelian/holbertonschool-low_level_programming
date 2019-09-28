#include "lists.h"

/**
 * _strdup - duplicates a string
 *
 * @str: pointer to a string to be copied
 *
 * Return: pointer to a string if success, NULL is malloc fails
 */

char *_strdup(const char *str)
{
	char *copy;
	int i = 0;
	int lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
		return (NULL);

	while (i < lenght)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to a head of the list
 * @str: string to be inserted
 *
 * Return: address of the new element if succesed, NULL othervise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *copy;

	copy = *head;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->str = _strdup(str);
	
	if (!new->str)
	{
		free(new->str);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;

	else
	{
		while (copy->next)
			copy = copy->next;

		copy->next = new;
	}

	return (copy);
}
