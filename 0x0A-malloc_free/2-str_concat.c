#include "holberton.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: on success - pointer to a new string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, k, first, second;

	if (s1)
		first = _strlen_recursion(s1);
	if (s2)
		second = _strlen_recursion(s2);

	new = malloc(sizeof(char) * (first + second + 1));

	if (new == NULL)
		return (NULL);

	i = 0;

	while (i < first)
	{
		new[i] = s1[i];
		i++;
	}
	k = 0;
	while (i < (first + second))
	{
		new[i] = s2[k];
		k++;
		i++;
	}
	new[i] = '\0';


	return (new);

}

/**
 * _strlen_recursion - checks string lenght
 *
 * @s: pointer to a string
 *
 * Return: number of elements
 */

int _strlen_recursion(char *s)
{

	if (*s)
		return (1 + (_strlen_recursion(s + 1)));
	else
		return (0);

}
