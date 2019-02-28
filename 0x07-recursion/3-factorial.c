#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: given number
 *
 * Return: -1 if n < 0, 1 if n == 0, otherwise a result of multiplication
 */

int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
		return (1);
	else
		return (-1);
}
