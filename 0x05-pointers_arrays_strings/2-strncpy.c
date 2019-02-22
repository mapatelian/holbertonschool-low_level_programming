#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: buffer for a string
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: buffer with a string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
		dest[s] = src[s];

	}

	for (; s < n; s++)
		dest[s] = '\0';

	return (dest);
}
