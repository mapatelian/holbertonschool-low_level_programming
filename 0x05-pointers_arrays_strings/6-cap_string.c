#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @c: pointer to a string to be modified
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *c)
{

	int i, k;
	char separ[] = "' '\t\n,;.!?\"(){}";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (k = 0; separ[k] != '\0'; k++)
		{
			if (c[i] == separ[k])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				c[i + 1] = c[i + 1] - 32;
			}


		}
	}
	return (c);
}
