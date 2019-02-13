#include "holberton.h"

/**
 * main - prints a string
 *
 * Return: Always 0.
 */

int main(void)
{

	char c[] = "Holberton";
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
