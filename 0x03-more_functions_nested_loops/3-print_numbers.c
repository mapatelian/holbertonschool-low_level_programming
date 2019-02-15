#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{

	char c;

	for (c = '1'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
