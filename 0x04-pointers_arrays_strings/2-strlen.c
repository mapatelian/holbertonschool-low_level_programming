#include "holberton.h"

/**
 * _strlen - checkes the lenght of a string
 *
 * @s: pointer to a string
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
