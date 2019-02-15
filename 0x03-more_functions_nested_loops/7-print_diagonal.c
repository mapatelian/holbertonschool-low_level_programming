#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)
{

	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k <= i; k++)
			{
				_putchar(' ');
				if (i == k)
					_putchar('\\');
			}
			_putchar('\n');
		}

	}
	if (n <= 0)
		_putchar('\n');
}
