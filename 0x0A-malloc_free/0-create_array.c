#include "holberton.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array to be created
 * @c: character to be assigned to the elements
 *
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		printf("Couldn't allocate the memory\n");
		return (NULL);
	}
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
