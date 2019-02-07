#include <stdio.h>

/**
 * main - computes sizes of variables
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	c = sizeof(c);
	i = sizeof(i);
	li = sizeof(li);
	lli = sizeof(lli);
	f = sizeof(f);

	printf("Size of a char: %i byte(s)\n", c);
	printf("Size of an int: %i byte(s)\n", i);
	printf("Size of a long int: %i byte(s)\n", li);
	printf("Size of a long long int: %i byte(s)\n", lli);
	printf("Size of a float: %i byte(s)\n", f);

	return (0);
}
