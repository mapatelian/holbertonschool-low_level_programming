#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format of a parameter
 */

void print_all(const char * const format, ...)
{

		op_t array[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	size_t i = 0, j = 0;
	char *sep = "";
	va_list valist;

	va_start(valist, format);

	while (format[i])
	{
		while (array[j].s)
		{
			if (format[i] == array[j].s)
			{
				printf("%s", sep);
				array[j].f(valist);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(valist);
}

/**
 * print_char - prints a character
 *
 * @valist: - parameter to be printed
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints integer
 *
 * @valist: - parameter to be printed
 */

void print_int(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

/**
 * print_float - prints a float
 *
 * @valist: parameter to be printed
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 *
 * @valist: parameter to be printed
 */

void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char*);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
