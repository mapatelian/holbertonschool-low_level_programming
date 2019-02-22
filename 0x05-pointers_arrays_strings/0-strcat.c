#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: buffer for a string
 * @src: string to be copied
 *
 * Return: buffer with a string
 */

char *_strcat(char *dest, char *src)
{

	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}
	return (dest);
}
