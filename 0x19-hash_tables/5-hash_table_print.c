#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;
	int stopper = 0;

	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (stopper == 0)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				stopper = 1;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
