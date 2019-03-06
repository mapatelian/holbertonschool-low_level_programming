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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	table = malloc((height) * sizeof(int *));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * (width));
		{
			if (table[i] == NULL)
			{
				while (i >= 0)
				{
					free(table[i]);
					i--;
				}
				free(table);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
			table[i][j] = 0;
	}

	return (table);
}
