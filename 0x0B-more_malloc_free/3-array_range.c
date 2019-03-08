#include "holberton.h"

/**
 * array_range - creates an array
 *
 * @min: number to start the array
 * @max: number to finish the array
 *
 * Return: on success - pointer to the created array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *new, i;

	if (min > max)
		return (NULL);

	new = malloc(sizeof(int) * ((max - min) + 1));
	if (!new)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		new[i] = i;
	}
	return (new);
}
