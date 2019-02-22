#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @c: string to be modified
 *
 * Return: mdified string
 */

char *rot13(char *c)

{

	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 65 && c[i] <= 77) || (c[i] >= 97 && c[i] <= 109))
			c[i] = c[i] + 13;
		if ((c[i] >= 78 && c[i] <= 90) || (c[i] >= 110 && c[i] <= 122))
			c[i] = c[i] - 13;
	}

	return (c);
}
