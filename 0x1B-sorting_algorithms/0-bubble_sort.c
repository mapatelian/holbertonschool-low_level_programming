#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 *
 * @array: pointer to an array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	if (size > 1)
	{
		for (i = 0; i < size - 1;)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				i = 0;
			}
			else
				i++;
		}
	}
}
