#include "holberton.h"

/**
 * prime_checker - helper function
 *
 * @n: number to check
 * @i: number to divide
 *
 * Return: 1 if i is the only divisor, otherwise 0
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return ((prime_checker(n, i - 1)));
}

/**
 * is_prime_number - checks if an integer is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if the number is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

return (prime_checker(n, n - 1));
}
