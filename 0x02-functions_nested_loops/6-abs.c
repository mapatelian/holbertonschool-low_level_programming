#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: integer to be checked
 *
 * Return: i
 */

int _abs(int i)
{

	if (i > 0)
		i = i;
	else if (i < 0)
		i = -i;
	else
		i = 0;

	return (i);
}
