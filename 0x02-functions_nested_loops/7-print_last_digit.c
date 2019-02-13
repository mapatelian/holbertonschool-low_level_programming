#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: number passed to the function
 *
 * Return: the last digit k
 */

int print_last_digit(int i)
{

	int k;

	k = i % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}
