#include "variadic_functions.h"

/**
 * print_numbers - prints parameters
 *
 * @separator: separator between the numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	size_t i;

	va_start(valist, n);

	if (!n)
	return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
