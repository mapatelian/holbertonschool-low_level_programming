#include <stdio.h>

/**
 * main - prints unique combinations of 2 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i + j != '8' + '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
