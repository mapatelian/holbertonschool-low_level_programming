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
	int *new, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new = malloc(sizeof(int) * size);
	if (!new)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		new[i] = min;
		min++;
	}
	return (new);
}
