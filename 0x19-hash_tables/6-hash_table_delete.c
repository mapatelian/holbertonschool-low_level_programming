#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 *
 * @ht: pointer to the table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *temp, *next_cpy;

	if (!ht)
		return;

	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			next_cpy = temp;
			temp = temp->next;
			free(next_cpy->next);
			free(next_cpy->value);
			free(next_cpy);

		}
		index++;
	}
	free(ht->array);
	free(ht);
}
