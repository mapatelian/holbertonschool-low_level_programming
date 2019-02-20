#include "holberton.h"

/**
 * rev_string - modifies a string through a pointer
 *
 * @s: pointer to a string
 */

void rev_string(char *s)
{

	int i, lenght, temp = 0, k;

	for (i = 0; s[i] != '\0'; i++)
		;
	lenght = i - 1;
	k = lenght;

	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;

		k--;

	}

}
