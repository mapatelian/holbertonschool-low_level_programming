#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to an array
 */

void print_chessboard(char (*a)[8])
{

	int i, k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[i][k]);
		}
		_putchar('\n');
	}

}
