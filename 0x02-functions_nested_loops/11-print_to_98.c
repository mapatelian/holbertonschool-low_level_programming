#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: last printed number
 */

void print_to_98(int n)
{

	int k = 98, i;

	if (n < k)
		for (i = n; i <= k; i++)
		{
			if (i <= -100)
			{
				_putchar('-');
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i >= -10 && i < 0 )
				_putchar(n / 100 + '0');
			if (i >= 0 && i <= 9)
				_putchar(i + '0');

			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i != k)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	_putchar('\n');

	if (n > k)
		for (i = n; i >= k; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i >= 100)
				_putchar(i % 100 + '0');

			if (i != k)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	_putchar('\n');

	if (n == k)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar('\n');
	}
}
