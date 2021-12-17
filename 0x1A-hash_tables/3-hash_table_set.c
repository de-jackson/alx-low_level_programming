#include "hash_tables.h"
#include <string.h>
/**
 * create_node - creates a new key-value entry
 * @key: key to add
 * @value: value to add to key
 * Return: the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!key || strlen(key) <= 0 || !value)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value  == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - A function that sets a key value pair in the hash table.
 * @ht: A pointer to hash table to set in.
 * @key: The key to set in hash table.
 * @value: The value to set as hash_node's value.
 * Return: 1 on success, or 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *tmp_node;

	if (!ht || !key || strlen(key) <= 0 || *key <= 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while ((ht->array)[index] != NULL)
	{
		if (strncmp(key, tmp_node->key, strlen(key)) == 0)
		{
			free(ht->array[index]->value);
			tmp_node->value = strdup(value);
			return (tmp_node->value ? 1 : 0);
		}
		tmp_node = tmp_node->next;
	}
	new_node = create_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
