#include "hash_tables.h"

/**
 * list_len - checks how many elements in a linked list
 *
 * @h: pointer to a head of the list
 *
 * Return: number of elements
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node, *copy;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			copy = ht->array[i];
			while (copy)
			{
				tmp_node = copy;
				copy = copy->next;
				free(tmp_node->key);
				free(tmp_node->value);
				free(tmp_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
