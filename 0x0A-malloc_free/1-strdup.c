#include "holberton.h"

/**
 * _strdup - duplicates a string
 *
 * @str: pointer to a string to be copied
 *
 * Return: pointer to a string if success, NULL is malloc fails
 */

char *_strdup(char *str)
{
	char *copy;
	int i = 0;

	copy = malloc(sizeof(str));

	if (copy == NULL)
		return (NULL);

	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}

return (copy);
}
