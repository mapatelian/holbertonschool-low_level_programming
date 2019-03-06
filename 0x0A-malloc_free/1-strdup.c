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
	int lenght = 0;

	if (!*str)
		return (NULL);

	while (str[lenght])
		lenght++;

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
		return (NULL);

	while (i < lenght)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

return (copy);
}
