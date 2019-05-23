#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements of the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%i] %s\n", _strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - counts the number of characters in a string
 * @string: stored string
 * Return: int number of characters in string
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; i[string]; i++)
	;

	return (i);
}