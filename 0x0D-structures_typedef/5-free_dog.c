#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (!d)
	return;

	free(d);
}
