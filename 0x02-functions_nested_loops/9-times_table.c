#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{

	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
			_putchar(n + '0');

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
