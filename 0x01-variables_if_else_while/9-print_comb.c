#include <stdio.h>

/**
 * main - prints number separated by comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
