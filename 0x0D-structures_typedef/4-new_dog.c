#include "dog.h"

/**
 * new_dog - creates a new struct variable
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to a new variable, NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));
	if (!dog_t)
	return (NULL);

	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;

	return (dog_t);

}
