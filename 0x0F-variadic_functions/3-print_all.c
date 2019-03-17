#include "variadic_functions.h"

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

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

void print_int(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

void print_string(va_list valist)
{
	char *s;
	s = va_arg(valist, char*);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
