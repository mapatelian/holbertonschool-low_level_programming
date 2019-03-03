#include "holberton.h"

/**
 * main - summs up numbers
 *
 * @argc: number of arguments
 * @argv: array of pointers to passed agruments
 *
 * Return: 0 if the process is successful, otherwise - 1
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 57 || *argv[i] < 48)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) >= 0)
			result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
