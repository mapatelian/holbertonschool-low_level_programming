#include "holberton.h"
#include <unistd.h>

/**
 * more_numbers - prints numbera
 */

void more_numbers(void)
{

	int i, k;
	char c = '\n';

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
				_putchar(k + '0');
		}
		write(1, &c, 1);
	}
}
