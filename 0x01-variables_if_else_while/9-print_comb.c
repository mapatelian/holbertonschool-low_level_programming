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
		if (i != '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i);
	}

	return (0);
}
