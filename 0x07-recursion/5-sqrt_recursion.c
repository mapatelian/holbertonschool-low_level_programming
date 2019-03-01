#include "holberton.h"

/**
 * checker - checks if a number has a square root
 *
 * @x: squarerooted number to guess
 * @y: number to check
 *
 * Return: x if x is a square root of y, otherwise -1
 */

int checker(int x, int y)
{
	if (x * x == y)
	return (x);

	if (x * x > y)
		return (-1);
	return (checker(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to check
 *
 * Return: natural square root, otherwise -1
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (checker(1, n));
}
