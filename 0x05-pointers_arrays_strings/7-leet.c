#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *
 * @c: pointer to a string
 *
 * Return: Always 0.
 */

char *leet(char *c)
{

	char symb[] = "a4A4e3E3o0O0t7T7l1L1";
	int i, k;


	for (i = 0; c[i] != '\0'; i++)
	{
		for (k = 0; symb[k] != '\0'; k = k + 2)
		{
			if (c[i] == symb[k])
				c[i] = symb[k + 1];
		}
	}
	return (c);
}
