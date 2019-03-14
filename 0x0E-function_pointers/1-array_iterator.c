#include "function_pointers.h"

/**
 * array_iterator - prints elements of array
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
