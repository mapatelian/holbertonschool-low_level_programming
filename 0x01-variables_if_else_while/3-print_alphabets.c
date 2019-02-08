#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);

	putchar('\n');

	return (0);

}
