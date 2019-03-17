#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: separator
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	size_t i;
	char *string;

	va_start(valist, n);

	if (!n)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char*);
		if (string == 0)
		string = "(nil)";

		printf("%s", string);

		if (i != n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
