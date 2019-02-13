#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: last printed number
 */

void print_to_98(int n)
{

	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
				printf("%i, ", i);
			else
				printf("%i\n", i);

		}
	if (n > 98)
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i\n", i);
		}


	if (n == 98)
                printf("%i\n", n);

}
