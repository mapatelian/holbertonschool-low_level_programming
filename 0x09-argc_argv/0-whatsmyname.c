#include "holberton.h"

/**
 * main - prints a name of the program
 *
 * @argc: number of arguments
 * @argv: array of pointers to passed agruments
 *
 * Return: 0 if the process is successful, otherwise - 1
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
