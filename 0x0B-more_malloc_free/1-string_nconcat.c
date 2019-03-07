#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to copy
 *
 * Return: on success - pointer to a new string, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int first, lenght, i;
	unsigned int second, k;
	char *copy;

	if (s1)
		for (first = 0; s1[first]; first++)
		;
	else
		first = 0;
	if (s2)
		for (second = 0; s2[second]; second++)
		;
	else
		second = 0;
	if (n >= second)
		n = second;
	lenght = first + n;
	copy = malloc(sizeof(char) * (lenght + 1));
	if (!copy)
		return (NULL);
	for (i = 0; i < first; i++)
		copy[i] = s1[i];
	k = 0;
	for (; i < lenght; i++)
	{
		copy[i] = s2[k];
		k++;
	}
	copy[i] = '\0';

	return (copy);
}
