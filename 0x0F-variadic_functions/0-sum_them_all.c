#include "variadic_functions.h"

/**
 * sum_them_all - sums up the parameters
 *
 * @n: number of parameters
 *
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}

	va_end(valist);

	return (sum);

}
