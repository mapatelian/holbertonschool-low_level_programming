#include "holberton.h"

/**
 * print_times_table - prints a table
 *
 * @n: number of rows and columns
 */

void print_times_table(int n)
{

	int i, k, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				x = i * k;
				if (x <= 9)
				{
					if (k != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(x + '0');
					if(k < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				if (x >= 10 && x <= 99)
				{
					_putchar(' ');
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
					if (k < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				if (x >= 100)
				{
					_putchar(x / 100 + '0');
					_putchar((x / 10) % 10 + '0');
					_putchar(x % 10 + '0');
					if (k < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
