#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to a string
 */

void puts_half(char *str)
{

	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		;

	n = i - (i / 2);

	for (; str[n]; n++)
		_putchar(str[n]);
	_putchar('\n');
}
