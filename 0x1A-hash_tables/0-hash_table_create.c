#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of the array inside a hush table
 *
 * Return: on success - pointer to a new hash table, otherwize - NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->array = malloc(sizeof(hash_node_t) * size);
	if (!new->array)
	{
		free(new->array);
		return (NULL);
	}
	return (new);
}
