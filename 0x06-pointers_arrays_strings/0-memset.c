#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory are to be filled
 * @b: constant byte
 * @n: number of first bytes to be modified
 *
 * Return: modified memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
