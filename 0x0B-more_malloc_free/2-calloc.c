#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: on success - pointer to the array, otherwise - NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(size * nmemb);
	if (!new)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		new[i] = 0;

	return (new);
}
