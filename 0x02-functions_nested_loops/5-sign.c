#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{

	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}

	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}

	else
	{
		i = 0;
		_putchar('0');
	}

	return (i);
}
