#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the table
 *
 * Return: pointer to a new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **hash_array;

	if (!size)
		return (0);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (0);

	hash_table->size = size;

	hash_array = calloc(size, sizeof(hash_node_t *));
	if (!hash_array)
	{
		free(hash_table);
		return (0);
	}

	hash_table->array = hash_array;

	return (hash_table);
}
