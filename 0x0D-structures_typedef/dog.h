#ifndef _DOGGY_H_
#define _DOGGY_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Short description
 * @name: name of the dog
 * @age: age of the gog
 * @owner: name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
