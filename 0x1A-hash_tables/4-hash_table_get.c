#include "hash_tables.h"

/**
 * list_len - checks how many elements in a linked list
 *
 * @h: pointer to a head of the list
 *
 * Return: number of elements
 */

size_t list_len(hash_node_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * hash_table_get - retrieves a value of a key
 * @ht: pointer to a hash table
 * @key: key to be checked
 *
 * Return: value of the element if it exists, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (list_len(ht->array[i]) == 1)
				{
					if ((_strncmpr(ht->array[i]->key, key) == 0))
						return (ht->array[i]->value);
				}
				while (ht->array[i])
				{
					if ((_strncmpr(ht->array[i]->key, key) == 0))
						return (ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
				}
			}
		}
	}
	return (NULL);
}
