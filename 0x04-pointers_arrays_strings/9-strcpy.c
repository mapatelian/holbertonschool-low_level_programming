#include "holberton.h"

/**
 * _strcpy - copies a string
 *
 * @src: pointer to a string to be copied
 * @dest: buffer for a new string
 *
 * Return: pointer to a buffer with a copied string
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0, k = 0;

	while (src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
