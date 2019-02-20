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

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
