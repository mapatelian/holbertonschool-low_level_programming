#include "hash_tables.h"

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
				if ((_strncmpr(ht->array[i]->key, key) == 0))
				{
					return (ht->array[i]->value);
				}
			}
		}
	}
	return (NULL);
}
