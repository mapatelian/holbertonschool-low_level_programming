#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{

	int n, i, k;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{

			k = i * n;
			if (k <= 9)
			{
				if (i != 0)
				{
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
