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
	int *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		exit (98);

	else
	{
		new = malloc(sizeof(size) * (nmemb));
		if (!new)
			return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		new[i] = 0;

	return (new);
}
