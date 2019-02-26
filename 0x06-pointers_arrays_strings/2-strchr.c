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

int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}

	if (s[i] == '\0')
		return (&s[i]);
	else
			return (0);
	
}
