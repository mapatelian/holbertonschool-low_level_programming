#include "holberton.h"

/**
 * print_rev - prints a string in reverce
 *
 * @s: pointer to a string
 */

void print_rev(char *s)
{

	int i;

	for (i = 0; s[i]; i++)
		;
	for (; i--;)
		_putchar(s[i]);
	_putchar('\n');
}
