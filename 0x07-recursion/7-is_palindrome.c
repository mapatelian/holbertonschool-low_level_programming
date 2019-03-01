#include "holberton.h"

/**
 * is_palindrome - checks whether a string is a palindrome
 *
 * @s: pointer to a string to check
 *
 * Return: 1 if the string doesn't exist, otherwise next element
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palcheck(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - finds the lenght of the string
 *
 * @s: pointer to a string
 *
 * Return: number of characters
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + (_strlen_recursion(s + 1)));

	return (0);
}

/**
 * palcheck - checks if the elements of the string are even
 *
 * @s: pointer to a string
 * @i: first element of the string
 * @len: last element of the string
 *
 * Return: 1 of the string is a palindrome, otherwise 0
 */

int palcheck(char *s1, int i, int len)
{
	if (s1[i] == s1[len])
		return (1);
	if (s1[i] != s1[len])
		return (0);
	return (palcheck(s1, i + 1, len - 1));
}
