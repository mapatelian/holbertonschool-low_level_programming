#include "holberton.h"

/**
 * main - prints number of passed arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers to passed agruments
 *
 * Return: 0 if the process is successful, otherwise - 1
 */

int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", (argc - 1));

	return (EXIT_SUCCESS);
}
