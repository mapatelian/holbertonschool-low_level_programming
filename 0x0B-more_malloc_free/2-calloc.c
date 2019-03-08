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

	if (!nmemb || !size)
		return (0);

	new = malloc(sizeof(size) * (nmemb + 1));
	if (!new)
		return (NULL);

	new[nmemb] = '\0';

	return (new);
}
