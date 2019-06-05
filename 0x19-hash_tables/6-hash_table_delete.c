#include "hash_tables.h"

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
			next_cpy = temp->next;
			free(temp->next);
			free(temp->value);
			free(temp->next);
			temp = next_cpy;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}