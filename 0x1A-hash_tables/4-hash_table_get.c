#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - A function that gets key and value froma hash table.
 * @ht: A pointer to hash table to pull value from.
 * @key: The key to get value from hash table.
 * Return: The value associated to key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value = NULL;
	hash_node_t *tmp;

	index = 0;
	if (!ht || !key)
	{
		return (NULL);
	}
	else if (strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		return (NULL);
	}
	tmp = ht->array[index];
	while (!value)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = tmp->value;
		}
		tmp = tmp->next;
	}
	return (value);
}
