#include "holberton.h"

/**
 * print_array - prints elements of an array
 *
 * @a: pointer to an array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%i, ", a[i]);
			else
				printf("%i", a[i]);
		}
		printf("\n");

	}
}
