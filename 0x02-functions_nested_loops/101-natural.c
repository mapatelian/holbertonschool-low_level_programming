#include <stdio.h>

/**
 * main - sums all numbers below 1024 divisible by 3 and 5
 *
 * Return: Always 0.
 */

int main(void)
{

	int i, j = 0;

	for (i = 0; i < 1024; i++)

	if (i % 3 == 0 || i % 5 == 0)
		j = j + i;

	printf("%i\n", j);

	return (0);
}
