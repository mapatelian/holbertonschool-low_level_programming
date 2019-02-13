#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{

	int i, k, j, y;

	for (i = 0; i <= 2; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (y = 0; y <= 9; y++)
				{
					if ((i <= 1 && k <= 9) || (i == 2 && k <= 3))
					{
						_putchar(i + '0');
						_putchar(k + '0');
						_putchar(':');
						_putchar(j + '0');
						_putchar(y + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
