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
	hash_node_t *tmp;

	index = 0;
	if (!ht || !key)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp)
	{
		while (tmp && strncmp(tmp->key, key, strlen(key)) != 0)
		{
			tmp = tmp->next;
		}
		return (tmp != NULL ? tmp->value : NULL);
	}
	return (NULL);
}
