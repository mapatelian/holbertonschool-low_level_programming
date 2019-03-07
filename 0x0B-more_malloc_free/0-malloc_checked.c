#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the memory to be allocated
 *
 * Return: on success pointer to the allocated memory, exit(98) if failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
