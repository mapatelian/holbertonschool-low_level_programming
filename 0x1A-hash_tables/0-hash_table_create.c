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
	if (size)
	{
		hash_node_t **array;
		hash_table_t *table;

		table = malloc(sizeof(hash_table_t));
		if (!table)
		{
			free(table);
			return (NULL);
		}

		array = malloc(sizeof(hash_node_t *) * size);
		if (!array)
		{
			free(array);
			return (NULL);
		}

		table->size = size;
		table->array = array;

		return (table);
	}
	return (NULL);
}
