#include "hash_tables.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @h: pointer to a head of the list
 * @key: key to be inserted
 * @value: value of the key
 *
 * Return: address of the new element if succesed, NULL othervise
 */

hash_node_t *add_node_end(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new, *copy;

	copy = *h;

	new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		free(new);
		fprintf(stderr, "failed");
		return (0);
	}

	new->key = (char *)key;
	new->value = _strdup((char *)value);

	if (*h == NULL)
	{
		new->next = (*h);
		*h = new;
	}

	else
	{
		while (copy->next)
			copy = copy->next;

		copy->next = new;
	}
	return (new);
}


/**
 * add_node - adds a node to the beginning of the list
 *
 * @head: pointer to a head of the list
 * @key: key to be inserted
 * @value: value of the key
 *
 * Return: pointer to a new node
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		fprintf(stderr, "failed");
		return (0);
	}

	new->key = (char *)key;
	new->value = _strdup((char *)value);

	if (new->value == NULL)
	{
		free(new);
		fprintf(stderr, "failed");
		return (0);
	}

	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strdup - duplicates a string
 *
 * @str: pointer to a string to be copied
 *
 * Return: pointer to a string if success, NULL is malloc fails
 */

char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int lenght = 0;

	if (str == NULL)
		return (0);

	while (str[lenght])
		lenght++;

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
	{
		fprintf(stderr, "failed");
		return (0);
	}

	while (i < lenght)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node = add_node(&ht->array[index], key, value);
		(void) new_node;
	}
	else
	{
		new_node = add_node_end(&ht->array[index], key, value);
		(void) new_node;
	}

	return (1);
}
