#include "holberton.h"

/**
 * alloc_grid - creates a 2D array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: on success - pointer to the 2D array, otherwise - NULL
 */

int **alloc_grid(int width, int height)
{
	int **table;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	table = malloc((height + 1) * sizeof(int));

	if (table == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * (width + 1));
		if (table == NULL)
			return (NULL);
	}

	return (table);
}
