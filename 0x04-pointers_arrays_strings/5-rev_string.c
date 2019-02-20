#include "holberton.h"

/**
 * rev_string - modifies a string through a pointer
 *
 * @s: pointer to a string
 */

void rev_string(char *s)
{

	int i, lenght, temp = 0, new = 0, k = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	lenght = (i / 2);
	i--;

	while (k <= lenght)
	{
		s[temp] = s[i];
		s[i] = s[new];
		s[new] = s[temp];

		k++;
		i--;
		new++;
	}

}
