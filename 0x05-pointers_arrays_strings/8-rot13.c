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

	int i, flag, j;

	char upper1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghigklmnopqrstuvwxyz";
	char upper2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; upper1[j] != '\0'; j++)
		{
			if (c[i] == upper1[j] && flag == 0)
			{
				c[i] = upper2[j];
				flag = 1;
			}
		}
	}

	return (c);
}
