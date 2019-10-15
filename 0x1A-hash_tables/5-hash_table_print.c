#include "hash_tables.h"

/**
 * hash_table_print - prints a hash  table
 * @ht: pointer to the table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int stopper = 1;

	if (ht)
	{
		printf("{");
		for (i = 0; i <= ht->size; i++)
		{
			if (ht->array[i])
			{
				while (ht->array[i])
				{
					if (stopper == 0)
						printf(", ");
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
					stopper = 0;
				}
			}
		}
		printf("}\n");
	}
}
