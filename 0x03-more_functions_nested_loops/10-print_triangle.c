#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{

	int i, k;

	if (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
		{
			for (k = 1; k <= size; k++)
			{
				if (k >= size - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
