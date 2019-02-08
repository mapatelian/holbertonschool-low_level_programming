#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks the last digit of a random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	k = n % 10;
	printf("Last digit od %i is %i ans is", n, k);

	if (k > 5)
		printf(" greater than 5\n");
	else if (k < 6 && k != 0)
		printf(" less than 6 and not 0\n");
	else
		printf(" 0\n");

	return (0);
}
