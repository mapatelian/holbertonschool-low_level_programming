#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to a string
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{

	int k, temp;

	n--;
	for (k = 0; k < n; k++)
	{
		temp = a[n];
		a[n] = a[k];
		a[k] = temp;

		n--;

	}
}
