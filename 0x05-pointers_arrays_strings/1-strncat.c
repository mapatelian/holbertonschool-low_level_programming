#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: buffer for a new string
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: buffer with a string
 */

char *_strncat(char *dest, char *src, int n)
{

	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (s = 0; s < n; s++)
	{
		dest[d] = src[s];
		d++;
	}
	return (dest);
}
