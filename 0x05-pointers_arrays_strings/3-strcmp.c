#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -15 if s1 < s2, 15 if s1 < s2, 0 id s1 == s2
 */

int _strcmp(char *s1, char *s2)
{

	int first, second, n;

	first = _strlen(s1);
	second = _strlen(s2);

	if (first < second)
		n = -15;
	if (first > second)
		n = 15;
	if (first == second)
		n = 0;

	return (n);
}

/**
 * _strlen - checkes number of character
 *
 * @s: pointer to a string to be checked
 *
 * Return: number of characters
 */

int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
