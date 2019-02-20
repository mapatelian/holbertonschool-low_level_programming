#include "holberton.h"

/**
 * puts2 - prints 1 character out of 2
 *
 * @str: pointer to a string to be printed
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
