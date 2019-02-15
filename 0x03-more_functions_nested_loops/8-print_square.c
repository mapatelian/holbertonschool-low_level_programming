#include "holberton.h"

/**
 * print_square - prints a square followed by a new line
 *
 * @size: the size of the square
 */

void print_square(int size)
{

	int i, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
