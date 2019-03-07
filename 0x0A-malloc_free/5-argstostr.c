#include "holberton.h"

/**
 * argstostr - concatenates arguments of s program
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: pointer to the array of strings
 */

char *argstostr(int ac, char **av)
{
	int lenght, i, k, w;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[k]; k++)
		;
	}
	lenght = i + k;
	i = 0;

	new = malloc(sizeof(char) * (lenght + 1));
	if (new == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (w = 0; av[k][w] != '\0'; w++)
		{
			new[i] = av[k][w];
			i++;
		}
		new[i] = '\n';
		i++;
	}
	return (new);
}
