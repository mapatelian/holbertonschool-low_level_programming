#include "hash_tables.h"

/**
 * update_node - updates a value of a key if it exits
 * @node: pointer to the node to be updated
 * @value: value to be inserted
 */

void update_node(hash_node_t **node, const char *value)
{
	(*node)->value = _strdup((char *)value);
}

/**
 * _strncmpr - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if the strings are identical, -1 otherwice
 */

int _strncmpr(char *str1, const char *str2)
{
	int i = 0;

	while (str1[i] == str2[i])
	{
		if (!str1[i] || !str2[i])
			break;
		i++;
	}
	if (!str1[i] && !str2[i])
		return (0);
	else
		return (-1);
}

/**
 * add_node - adds a node to the beginning of the list
 *
 * @head: pointer to a head of the list
 * @key: key to be inserted
 * @value: value of the key
 */

void add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		fprintf(stderr, "failed");
		return;
	}

	new->key = _strdup((char *)key);
	new->value = _strdup((char *)value);

	if (new->value == NULL || new->key == NULL)
	{
		free(new);
		fprintf(stderr, "failed");
		return;
	}

	new->next = *head;
	*head = new;
}

/**
 * _strdup - duplicates a string
 * @str: pointer to a string to be copied
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

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key to be added
 * @value: value to inserted
 *
 * Return: 1 if succedeed, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!key || !*key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		add_node(&ht->array[index], key, value);

	else
	{
		if ((_strncmpr(ht->array[index]->key, key) == 0))
			update_node(&ht->array[index], value);
		else
			add_node(&ht->array[index], key, value);
	}
	return (1);
}
