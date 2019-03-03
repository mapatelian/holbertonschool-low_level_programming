#include "holberton.h"

/**
 * main - multiplies arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers to passed agruments
 *
 * Return: 0 if the process is successful, otherwise - 1
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[2]) * atoi(argv[1]);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
