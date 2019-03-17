#ifndef _VARIADIC_F_
#define _VARIADIC_F_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef struct op
{
	char s;
	void (*f)(va_list valist);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);

#endif