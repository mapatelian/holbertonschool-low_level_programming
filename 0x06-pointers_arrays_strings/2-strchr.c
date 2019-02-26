#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to a string
 * @c: character to search
 *
 * Return: modified string
 */

char *_strchr(char *s, char c)
{

	while (*s != c && *s)
		s++;
	if (!c)
		return (NULL);
	else
		return (s);
}
