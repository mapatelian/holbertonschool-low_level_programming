#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: characters to search
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, k, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				count++;
		}
	}
	return (count);
}
